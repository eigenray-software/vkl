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
    let args: Vec<String> = std::env::args().collect();

    std::io::stdout();

    let reg = parser_xml(args[1].as_str());
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
    println!("#include <assert.h>");
    println!("#include <vulkan/vulkan.h>");
    println!(
        r#"
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

"#
    );

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

    println!(
        r#"
#ifdef __cplusplus
extern "C" {{
#endif
"#
    );
    println!("\n\nVkResult vkl_init(PFN_vkGetInstanceProcAddr);");
    println!("void vkl_load_instance_functions(VkInstance instance);");
    println!(
        "void vkl_load_device_functions(VkDevice device, struct VklDeviceFunctions* fnptrs);\n\n"
    );

    write_cmds(&ext, commands);

    println!(
        r#"
#ifdef __cplusplus
}}
#endif
"#
    );
    println!("#endif //A21E2F7E_5464_4B27_8400_EC0EB967B70B");
    //write_structs(&ext, structs);
}

fn collect_pairs<'a, I: Iterator<Item = &'a (String, String, String)>>(args: I, n: bool) -> String {
    if n {
        args.map(|(_, n, _)| n.to_string())
            .collect::<Vec<_>>()
            .join(", ")
    } else {
        args.map(|(t, n, arr)| format!("{} {}{}", t, n, arr))
            .collect::<Vec<_>>()
            .join(", ")
    }
}

trait VkFunction {
    fn is_instance_function(&self) -> bool {
        !self.is_global_function()
            && (self.get_arg().unwrap() == "VkInstance"
                || self.get_arg().unwrap() == "VkPhysicalDevice"
                || self.get_name() == "vkGetDeviceProcAddr")
    }

    fn is_global_function(&self) -> bool {
        if let Some(arg) = self.get_arg() {
            !arg.starts_with("Vk") || self.get_name() == "vkGetInstanceProcAddr"
        } else {
            true
        }
    }

    fn is_device_function(&self) -> bool {
        !self.is_instance_function() && !self.is_global_function()
    }

    fn get_glob_assert(&self) -> String {
        format!(
            "assert({} && \"{} is not loaded\");",
            self.get_glob(),
            self.get_name()
        )
    }

    fn get_assert(&self, prefix: &str) -> String {
        format!(
            "assert({0}pfn_{1} && \"{1} is not loaded\")",
            prefix,
            self.get_name()
        )
    }

    fn get_glob(&self) -> String {
        let st = if self.is_device_function() {
            "dfn."
        } else {
            ""
        };
        format!("g_vkl_fnptrs.{}pfn_{}", st, self.get_name())
    }

    fn write_cmd(&self) {
        let name = self.get_name();
        let re = self.get_re();
        let args = self.get_args();

        println!(
            "\nVKAPI_ATTR {} VKAPI_CALL {}({}) {{\n\t{}\n\t{} {}({});\n}}\n",
            re,
            name,
            collect_pairs(args.iter(), false),
            self.get_glob_assert(),
            if re != "void" { "return " } else { "" },
            self.get_glob(),
            collect_pairs(args.iter(), true)
        );
    }

    fn can_write_device_cmd(&self) -> bool {
        if let Some("VkDevice") = self.get_arg() {
            return self.is_device_function();
        }

        false
    }

    fn write_device_cmd(&self) {
        if !self.can_write_device_cmd() {
            return;
        }

        let name = self.get_name();
        let re = self.get_re();
        let args = self.get_args();
        let dev = if args.len() > 1 { ", " } else { "" };

        println!(
            "\t{} {}({}) {{\n\t\t{};\n\t\t{}pfn_{}(this->handle{}{});\n\t}}\n",
            re,
            &name[2..],
            collect_pairs(args.iter().skip(1), false),
            self.get_assert(""),
            if re != "void" { "return " } else { "" },
            name,
            dev,
            collect_pairs(args.iter().skip(1), true)
        );
    }

    fn can_write_cmd_cmd(&self, handle_name: &str, prefix: &str) -> bool {
        if !self.is_device_function() {
            return false;
        }

        if let Some(arg) = self.get_arg() {
            if arg != handle_name {
                return false;
            }
        } else {
            return false;
        }
        true
    }

    fn write_cmd_cmd(&self, handle_name: &str, prefix: &str) {
        if !self.can_write_cmd_cmd(handle_name, prefix) {
            return;
        }

        let name = self.get_name();
        let re = self.get_re();
        let args = self.get_args();
        let dev = if args.len() > 1 { ", " } else { "" };
        let name2 = name.replace(&handle_name[2..], "");

        println!(
            "\t{} {}({}) {{\n\t\t{};\n\t\t{}fnptrs->pfn_{}(this->handle{}{});\n\t}}\n",
            re,
            &name2[2 + ((name2.starts_with(prefix) as usize) * (prefix.len() - 2))..],
            collect_pairs(args.iter().skip(1), false),
            self.get_assert("fnptrs->"),
            if re != "void" { "return " } else { "" },
            name,
            dev,
            collect_pairs(args.iter().skip(1), true)
        );
    }

    fn get_name(&self) -> &str;
    fn get_arg(&self) -> Option<&str>;
    fn get_args(&self) -> &Vec<(String, String, String)>;
    fn get_re(&self) -> &str;
}

impl VkFunction for (&String, &(String, Vec<(String, String, String)>)) {
    fn get_name(&self) -> &str {
        self.0.as_str()
    }
    fn get_arg(&self) -> Option<&str> {
        self.1 .1.first().map(|s| s.0.as_str())
    }

    fn get_args(&self) -> &Vec<(String, String, String)> {
        &self.1 .1
    }

    fn get_re(&self) -> &str {
        &self.1 .0
    }
}

impl VkFunction for &(String, String, Vec<(String, String, String)>) {
    fn get_name(&self) -> &str {
        self.0.as_str()
    }
    fn get_arg(&self) -> Option<&str> {
        self.2.first().map(|s| s.0.as_str())
    }
    fn get_args(&self) -> &Vec<(String, String, String)> {
        &self.2
    }
    fn get_re(&self) -> &str {
        &self.1
    }
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
        println!("struct VklDeviceFunctions {{");
        println!("\tVkDevice handle;");

        for f in inmap.iter() {
            if f.is_device_function() {
                let name = f.get_name();
                println!("\tPFN_{} pfn_{};", name, name);
            }
        }

        for (ext, v) in map.iter() {
            let it = v.iter().filter(|f| f.is_device_function());

            if it.clone().count() > 0 {
                println!("#ifdef {}", ext);
                for f in it {
                    let name = f.get_name();
                    println!("\tPFN_{} pfn_{};", name, name);
                }
                println!("#endif");
            }
        }

        println!("#ifdef __cplusplus");

        for f in inmap.iter() {
            f.write_device_cmd();
        }

        for (ext, v) in map.iter() {
            let it = v.iter().filter(|f| f.can_write_device_cmd());
            if it.clone().count() > 0 {
                println!("#ifdef {}", ext);
                for f in it {
                    f.write_device_cmd();
                }
                println!("#endif");
            }
        }

        println!("#endif");

        println!("}};");
    }

    {
        println!("#ifdef __cplusplus");
        println!("struct VklCommandFunctions {{");
        println!("\tVklDeviceFunctions* fnptrs;");
        println!("\tVkCommandBuffer handle;");

        let handle = "VkCommandBuffer";
        let prefix = "vkCmd";

        for f in inmap.iter() {
            f.write_cmd_cmd(handle, prefix);
        }

        for (ext, v) in map.iter() {
            let it = v.iter().filter(|f| f.can_write_cmd_cmd(handle, prefix));
            if it.clone().count() > 0 {
                println!("#ifdef {}", ext);
                for f in it {
                    f.write_cmd_cmd(handle, prefix);
                }
                println!("#endif\n");
            }
        }

        println!("}};");

        println!("#endif");
    }

    {
        println!("#ifdef __cplusplus");
        println!("struct VklQueueFunctions {{");
        println!("\tVklDeviceFunctions* fnptrs;");
        println!("\tVkQueue handle;");

        let handle = "VkQueue";
        let prefix = "vkQueue";

        for f in inmap.iter() {
            f.write_cmd_cmd(handle, prefix);
        }

        for (ext, v) in map.iter() {
            let it = v.iter().filter(|f| f.can_write_cmd_cmd(handle, prefix));
            if it.clone().count() > 0 {
                println!("#ifdef {}", ext);
                for f in it {
                    f.write_cmd_cmd(handle, prefix);
                }
                println!("#endif");
            }
        }

        println!("}};");

        println!("#endif");
    }

    {
        println!("struct VklFunctions {{");

        for f in inmap.iter() {
            if f.is_instance_function() || f.is_global_function() {
                let name = f.get_name();
                println!("\tPFN_{} pfn_{};", name, name);
            }
        }

        for (ext, v) in map.iter() {
            let it = v
                .iter()
                .filter(|f| f.is_instance_function() || f.is_global_function());

            if it.clone().count() > 0 {
                println!("#ifdef {}", ext);
                for f in it {
                    let name = f.get_name();
                    println!("\tPFN_{} pfn_{};", name, name);
                }
                println!("#endif");
            }
        }

        println!("\tVklDeviceFunctions dfn;");
        println!("}};");
    }
    println!("#ifdef VKL_IMPL");
    println!("static struct VklFunctions g_vkl_fnptrs;");
    {
        for f in inmap.iter() {
            f.write_cmd();
        }
        for (ext, v) in map.iter() {
            if !v.is_empty() {
                println!("#ifdef {}", ext);
                for f in v {
                    f.write_cmd();
                    println!("");
                }
                println!("#endif");
            }
        }
    }

    println!(
        "{}",
        r#"
      VkResult vkl_init(PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr)
      {
          if (!vkGetInstanceProcAddr)
          {
              return VK_ERROR_INITIALIZATION_FAILED;
          }
          
          g_vkl_fnptrs.pfn_vkGetInstanceProcAddr = vkGetInstanceProcAddr;

          g_vkl_fnptrs.pfn_vkCreateInstance                       = (PFN_vkCreateInstance)vkGetInstanceProcAddr(0, "vkCreateInstance");
          g_vkl_fnptrs.pfn_vkEnumerateInstanceVersion             = (PFN_vkEnumerateInstanceVersion)vkGetInstanceProcAddr(0, "vkEnumerateInstanceVersion");
          g_vkl_fnptrs.pfn_vkEnumerateInstanceLayerProperties     = (PFN_vkEnumerateInstanceLayerProperties)vkGetInstanceProcAddr(0, "vkEnumerateInstanceLayerProperties");
          g_vkl_fnptrs.pfn_vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties)vkGetInstanceProcAddr(0, "vkEnumerateInstanceExtensionProperties");

          if (!g_vkl_fnptrs.pfn_vkCreateInstance)
          {
              return VK_ERROR_INITIALIZATION_FAILED;
          }

          return VK_SUCCESS;
      }"#
    );

    {
        println!("void vkl_load_instance_functions(VkInstance instance) {{");

        for f in inmap.iter() {
            if f.is_instance_function() {
                let name = f.get_name();
                println!(
                "\tg_vkl_fnptrs.pfn_{} = (PFN_{})g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, \"{}\");",
                name, name, name
            )
            }
        }

        for (ext, v) in map.iter() {
            println!("#ifdef {}", ext);
            for f in v.iter() {
                if f.is_instance_function() {
                    let name = f.get_name();
                    println!(
                        "\tg_vkl_fnptrs.pfn_{} = (PFN_{})g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, \"{}\");",
                        name, name, name
                    );
                }
            }
            println!("#endif");
        }
        println!("\tvoid vkl_load_device_functions_impl(VkDevice device, PFN_vkGetDeviceProcAddr pfn_load_dev_fn, VklDeviceFunctions* fnptrs);");
        println!("\tvkl_load_device_functions_impl((VkDevice)instance, (PFN_vkGetDeviceProcAddr)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr, &g_vkl_fnptrs.dfn);");
        println!("}}");
    }

    {
        println!("void vkl_load_device_functions_impl(VkDevice device, PFN_vkGetDeviceProcAddr pfn_load_dev_fn, VklDeviceFunctions* fnptrs) {{");
        println!("\tfnptrs->handle = device;");
        for f in inmap.iter() {
            if f.is_device_function() {
                let name = f.get_name();
                println!(
                    "\tfnptrs->pfn_{} = (PFN_{})pfn_load_dev_fn(device, \"{}\");",
                    name, name, name
                )
            }
        }

        for (ext, v) in map.iter() {
            println!("#ifdef {}", ext);
            for f in v.iter() {
                if f.is_device_function() {
                    let name = f.get_name();
                    println!(
                        "\tfnptrs->pfn_{} = (PFN_{})pfn_load_dev_fn(device, \"{}\");",
                        name, name, name
                    );
                }
            }
            println!("#endif");
        }

        println!("}}");

        println!("void vkl_load_device_functions(VkDevice device, VklDeviceFunctions* fnptrs) {{");
        println!(
            "\tvkl_load_device_functions_impl(device, g_vkl_fnptrs.pfn_vkGetDeviceProcAddr, fnptrs);"
        );
        println!("}}");
    }
    println!("#endif");
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
