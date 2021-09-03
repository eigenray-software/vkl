//#![feature(box_syntax, untagged_unions, try_trait)]
#![allow(warnings)]
use xml::attribute::*;
use xml::*;

use fxhash::*;

use std::fs::File;
use std::io::BufReader;
use std::mem::transmute;
type Set<T> = FxHashSet<T>;
type Map<T, U> = FxHashMap<T, U>;

use Default;

use xml::reader::{EventReader, XmlEvent};

#[derive(Debug, Default, Eq, PartialEq, Hash)]
pub struct XmlNode {
    parent: usize,
    name: String,
    attr: Vec<(String, String)>,
    children: Vec<XmlChild>,
}

impl XmlNode {
    pub fn show_self(&self, d: &str) {
        println!("{}{}", d, self.name);
        for (k, v) in self.attr.iter() {
            println!("{}\t[{} = {}]", d, k, v);
        }
    }

    pub fn show(&self, d: &str) {
        self.show_self(&d);
        for c in self.children.iter() {
            match c {
                XmlChild::Node(c) => c.show(&[d, "\t"].concat()),
                XmlChild::Str(s) => {
                    println!("{}\t\"{}\"", d, s);
                }
            }
        }
    }

    pub fn children(&self) -> Vec<&XmlNode> {
        self.children
            .iter()
            .filter_map(|c| match c {
                XmlChild::Node(n) => Some(n.as_ref()),
                _ => None,
            })
            .collect()
    }

    pub fn cpp_type(&self) -> String {
        self.children
            .iter()
            .map(|c| match c {
                XmlChild::Node(c) => c.get_str(),
                XmlChild::Str(s) => s,
            })
            .collect::<Vec<_>>()
            .join(" ")
    }

    pub fn visit<F: Fn(&XmlNode, &str), F2: Fn(&XmlNode) -> bool>(&self, s: &str, f: &F, f2: &F2) {
        if f2(self) {
            f(self, s);
            for c in self.children() {
                c.visit(&[s, "\t"].concat(), f, f2);
            }
        }
    }

    pub fn find_attr(&self, attr: &str) -> Option<&str> {
        self.attr
            .iter()
            .find(|(k, v)| k == attr)
            .map(|(k, v)| v.as_str())
    }
    pub fn find_child(&self, c: &str) -> Option<&XmlNode> {
        self.children().into_iter().find(|n| n.name == c)
    }
    pub fn get_str(&self) -> &str {
        match self.children.as_slice() {
            [XmlChild::Str(s)] => s,
            _ => unreachable!(),
        }
    }
    pub fn show_if(&self, k: &str, v: &str) {
        if Some(v) == self.find_attr(k) {
            self.show("")
        }
    }

    pub fn get_attr(&self, map: &mut Map<String, Set<String>>) {
        for (k, v) in self.attr.iter() {
            map.entry(k.clone()).or_default().insert(v.clone());
        }
        // for c in self.children() {
        //   c.get_attr(map)
        // }
    }
}

#[derive(Debug, Eq, PartialEq, Hash)]
enum XmlChild {
    Node(Box<XmlNode>),
    Str(String),
}

fn parser_xml(src: &str) -> Box<XmlNode> {
    fn new_node(name: String, attr: Vec<OwnedAttribute>) -> Box<XmlNode> {
        let mut node = Box::new(XmlNode::default());
        node.name = name;
        node.attr = attr
            .into_iter()
            .filter_map(|a| {
                if a.name.local_name != "comment" {
                    Some((a.name.local_name, a.value))
                } else {
                    None
                }
            })
            .collect();
        node
    }
    unsafe {
        let mut root = Box::new(XmlNode::default());
        let mut curr_node = None;
        let mut comment = false;
        for e in EventReader::new(BufReader::new(File::open(src).unwrap())) {
            match e.unwrap() {
                XmlEvent::StartElement {
                    name, attributes, ..
                } => {
                    if name.local_name == "comment" {
                        comment = true;
                        continue;
                    }
                    if curr_node.is_some() {
                        let mut node = new_node(name.local_name, attributes);
                        node.parent = curr_node.unwrap();
                        let mut c = transmute::<usize, &mut XmlNode>(curr_node.unwrap());
                        curr_node = Some(transmute(node.as_ref()));
                        c.children.push(XmlChild::Node(node));
                    } else {
                        {
                            root = new_node(name.local_name, attributes);
                            curr_node = Some(transmute(root.as_ref()));
                        }
                    }
                }
                XmlEvent::EndElement { name } => {
                    if name.local_name == "comment" {
                        comment = false;
                        continue;
                    }
                    curr_node = Some(transmute::<usize, &XmlNode>(curr_node.unwrap()).parent);
                }
                XmlEvent::Characters(s) => {
                    if !comment {
                        transmute::<usize, &mut XmlNode>(curr_node.unwrap())
                            .children
                            .push(XmlChild::Str(s.trim().to_string()));
                    }
                }
                _ => (),
            }
        }
        root
    }
}

fn find_node<'a, F: Fn(&'a XmlNode) -> bool>(root: &'a XmlNode, f: &F) -> Option<&'a XmlNode> {
    for c in root.children() {
        if f(c) {
            return Some(c);
        }
    }
    None
}

#[derive(Debug, Eq, PartialEq, Hash)]
pub enum Len {
    i64(i64),
    apic(String),
}

fn main() {
    let reg = parser_xml("../Vulkan-Docs/xml/vk.xml");
    let ext = reg
        .children()
        .into_iter()
        .find(|n| n.name == "extensions")
        .unwrap()
        .children();

    let mut structs = Map::<String, String>::default();
    let mut commands = Map::<String, (String, Vec<(String, String, String)>)>::default();

    for ty in find_node(&reg, &|n| n.name == "types").unwrap().children() {
        let category = ty.find_attr("category");
        if category == Some("struct") {
            if let Some(stype) = ty
                .children()
                .into_iter()
                .find_map(|c| c.find_attr("values"))
            {
                structs.insert(ty.find_attr("name").unwrap().to_owned(), stype.to_owned());
            }
            continue;
        }
    }
    println!("#ifndef A21E2F7E_5464_4B27_8400_EC0EB967B70B");
    println!("#define A21E2F7E_5464_4B27_8400_EC0EB967B70B");
    println!("#include <vulkan/vulkan.h>");
    println!(r#"
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef float f32;
typedef double f64;
"#);

    let fp = tokens::ParamParserParser::new();

    for cmd in reg.find_child("commands").unwrap().children() {
        if let Some(c) = cmd.find_child("proto") {
            let args = cmd.children().into_iter().filter(|c| c.name == "param");
            let cmd = format!(
                "{}({});",
                c.cpp_type(),
                args.clone()
                    .map(|c| c.cpp_type())
                    .collect::<Vec<_>>()
                    .join(", ")
            );

            let (re, name, params): (String, String, Vec<(String, String, String)>) =
                fp.parse(&cmd).unwrap();

            commands.insert(name, (re, params));
        }
    }

    println!("{}", "\n\nVkResult vkl_init();");
    println!("{}", "void vkl_load_instance_functions(VkInstance instance);");
    println!("{}", "void vkl_load_device_functions(VkDevice device);\n\n");
    
    println!("#ifdef VKL_IMPL");
    write_cmds(&ext, commands);
    println!("#endif");
    println!("#endif //A21E2F7E_5464_4B27_8400_EC0EB967B70B");
    //write_structs(&ext, structs);
}

fn collect_pairs(args: &[(String, String, String)], n: bool) -> String {
    if n {
        args.iter()
            .map(|(_, n, _)| n.to_string())
            .collect::<Vec<_>>()
            .join(", ")
    } else {
        args.iter()
            .map(|(t, n, arr)| format!("{} {}{}", t, n, arr))
            .collect::<Vec<_>>()
            .join(", ")
    }
}

fn write_cmd(name: &String, re: &String, mut args: &Vec<(String, String, String)>) {
    println!(
        "{} {}({}) {{\n\t{}g_vkl_fnptrs.{}({});\n}}",
        re,
        name,
        collect_pairs(&args, false),
        if re != "void" { "return " } else { "" },
        name,
        collect_pairs(&args, true)
    );
}

fn is_instance_function(func: &str, arg: &str) -> bool {
    arg == "VkInstance" || arg == "VkPhysicalDevice" || !arg.starts_with("Vk") ||
    func == "vkGetDeviceProcAddr"
}

fn write_cmds(
    ext: &Vec<&XmlNode>,
    mut inmap: Map<String, (String, Vec<(String, String, String)>)>,
) {
    //let extx = ext.into_iter().flat_map(|base| base.children().into_iter().flat_map(|req| req.children())).collect::<Vec<_>>();
    let mut map = Map::<String, Vec<(String, String, Vec<(String, String, String)>)>>::default();

    for base in ext.into_iter() {
        for req in base.children() {
            for c in req.children() {
                if c.name == "command" {
                    let st = c.find_attr("name").unwrap();
                    if let Some((name, (re, args))) = inmap.remove_entry(st) {
                        let ext_name = base.find_attr("name").unwrap().to_string();
                        map.entry(base.find_attr("name").unwrap().to_string())
                            .or_default()
                            .push((name, re, args));
                    }
                }
            }
        }
    }

    {
        println!("struct {{");
        for (name, _) in inmap.iter() {
            println!("\tPFN_{} {};", name, name);
        }

        for (ext, v) in map.iter() {
            println!("#ifdef {}", ext);
            for (name, re, args) in v {
                println!("\tPFN_{} {};", name, name);
            }
            println!("#endif");
        }
        println!("}} g_vkl_fnptrs;")
    }

    {
        for (name, (re, args)) in inmap.iter() {
            write_cmd(name, re, args);
        }
        for (ext, v) in map.iter() {
            println!("#ifdef {}", ext);
            for (name, re, args) in v {
                write_cmd(name, re, args);
            }
            println!("#endif");
        }
    }

    println!(
        "{}",
      
        r#"
        #ifdef __cplusplus 
        #define VKL_EXTERN extern "C"
        #else
        #define VKL_EXTERN extern
        #endif
  
        #ifdef _WIN32
        typedef struct HINSTANCE__* HMODULE;
        typedef __int64 (__stdcall *FARPROC)();
        __declspec(dllimport) VKL_EXTERN HMODULE __stdcall LoadLibraryA(const char*);
        __declspec(dllimport) VKL_EXTERN FARPROC __stdcall GetProcAddress(HMODULE, const char*);
        #define LOAD_LIB (void*)LoadLibraryA("vulkan-1.dll")
        #define PROC_ADDR(lib, proc) ((void*)GetProcAddress((struct HINSTANCE__*)lib, proc))
        #elif __linux__
        #include <dlfcn.h>
        #define LOAD_LIB dlopen("libvulkan.so.1", RTLD_NOW)
        #define PROC_ADDR(lib, proc) dlsym(lib, proc)
        #else
        #error "Unsupported platform"
        #endif

      VkResult vkl_init() {      
        void* lib = LOAD_LIB;
        if (!lib) {
          return VK_ERROR_INITIALIZATION_FAILED;
        }
        g_vkl_fnptrs.vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)PROC_ADDR(lib, "vkGetInstanceProcAddr");
      
        if (!g_vkl_fnptrs.vkGetInstanceProcAddr) {
          return VK_ERROR_INITIALIZATION_FAILED;
        }
      
        g_vkl_fnptrs.vkCreateInstance = (PFN_vkCreateInstance)g_vkl_fnptrs.vkGetInstanceProcAddr(0, "vkCreateInstance");
        g_vkl_fnptrs.vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion)g_vkl_fnptrs.vkGetInstanceProcAddr(0, "vkEnumerateInstanceVersion");
        g_vkl_fnptrs.vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties)g_vkl_fnptrs.vkGetInstanceProcAddr(0, "vkEnumerateInstanceLayerProperties");
        g_vkl_fnptrs.vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties)g_vkl_fnptrs.vkGetInstanceProcAddr(0,"vkEnumerateInstanceExtensionProperties");

        if (!g_vkl_fnptrs.vkCreateInstance) {
          return VK_ERROR_INITIALIZATION_FAILED;
        }
      
        return VK_SUCCESS;
      }"#
    );

    { 
        println!("void vkl_load_instance_functions(VkInstance instance) {{");

        for (name, (re, args)) in inmap.iter() {
            if is_instance_function(&name, &args[0].0) {
                println!(
                    "\tg_vkl_fnptrs.{} = (PFN_{})g_vkl_fnptrs.vkGetInstanceProcAddr(instance, \"{}\");",
                    name, name, name
                )
            }
        }

        for (ext, v) in map.iter() {
            let mut load = vec![];
            for (name, re, args) in v.iter() {
                if is_instance_function(&name, &args[0].0) {
                    load.push(name);
                }
            }
            if !load.is_empty() {
                println!("#ifdef {}", ext);
                for name in load {
                    println!(
                        "\tg_vkl_fnptrs.{} = (PFN_{})g_vkl_fnptrs.vkGetInstanceProcAddr(instance, \"{}\");",
                        name, name, name
                    );
                }
                println!("#endif");
            }
        }

        println!("}}");
    }

    {
        println!("void vkl_load_device_functions(VkDevice device) {{");
        for (name, (re, args)) in inmap.iter() {
            if !is_instance_function(&name, &args[0].0) {
                println!(
                    "\tg_vkl_fnptrs.{} = (PFN_{})g_vkl_fnptrs.vkGetDeviceProcAddr(device, \"{}\");",
                    name, name, name
                )
            }
        }

        for (ext, v) in map.iter() {
            let mut load = vec![];
            for (name, re, args) in v.iter() {
                if !is_instance_function(&name, &args[0].0) {
                    load.push(name);
                }
            }
            if !load.is_empty() {
                println!("#ifdef {}", ext);
                for name in load {
                    println!(
                        "\tg_vkl_fnptrs.{} = (PFN_{})g_vkl_fnptrs.vkGetDeviceProcAddr(device, \"{}\");",
                        name, name, name
                    );
                }
                println!("#endif");
            }
        }

        println!("}}");
    }
}

fn write_structs(ext: &Vec<&XmlNode>, mut map: Map<String, String>) {
    let writer = |st: String, ty: String| {
        println!("struct {} : {} {{", &st[2..], st);
        println!("\t{}() : {}{{ .sType = {}}} {{\n\t\t {{", &st[2..], st, ty);
        println!("\t\t}}\n\t}}");
        println!("}};");
    };

    println!("#ifdef __cplusplus");
    println!("#ifndef VKL_NO_STRUCTS");

    for base in ext.into_iter() {
        for req in base.children() {
            let mut structs = vec![];
            for c in req.children() {
                if c.name == "type" {
                    let st = c.find_attr("name").unwrap();
                    if let Some((st, stype)) = map.remove_entry(st) {
                        structs.push((st, stype));
                    }
                }
            }
            if !structs.is_empty() {
                println!("#ifdef {}", base.find_attr("name").unwrap());

                for (st, stype) in structs {
                    writer(st, stype);
                }
                println!("#endif");
            }
        }
    }

    for (st, stype) in map {
        writer(st, stype);
    }

    println!("#endif");
    println!("#endif");
}

#[macro_use]
extern crate lalrpop_util;
lalrpop_mod!(pub tokens);
