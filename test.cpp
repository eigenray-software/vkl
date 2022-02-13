

#define VKL_IMPL
#include "vkl.h"

#include <stdio.h>
#include <stdlib.h>
#include <vector>

#ifdef _WIN32
typedef struct HINSTANCE__* HMODULE;
typedef __int64(__stdcall* FARPROC)();
extern "C" __declspec(dllimport) HMODULE __stdcall LoadLibraryA(const char*);
extern "C" __declspec(dllimport) FARPROC
    __stdcall GetProcAddress(HMODULE, const char*);

void* load_lib() {
  return (void*)GetProcAddress(LoadLibraryA("vulkan-1.dll"),
                               "vkGetInstanceProcAddr");
}

#elif __linux__
#include <dlfcn.h>

void* load_lib() {
  return (void*)dlsym(dlopen("vulkan.so.1", RTLD_NOW), "vkGetInstanceProcAddr");
}

#else
#error "Unsupported platform"
#endif

const char* vk_result_string(VkResult re);

#define CHECKRE(expr)                                                          \
  {                                                                            \
    VkResult re = (expr);                                                      \
    while (re) {                                                               \
      printf("Error: %s\n %s:%d\n", vk_result_string(re), __FILE__, __LINE__); \
      abort();                                                                 \
    }                                                                          \
  }

int main() {
  vkl_init((PFN_vkGetInstanceProcAddr)load_lib());

  VkApplicationInfo app = {
      .sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
      .apiVersion = VK_API_VERSION_1_3,
  };

  const char* layers[] = {"VK_LAYER_KHRONOS_validation"};

  static const char* ext[] = {
      "VK_KHR_surface",
      "VK_KHR_win32_surface",
  };

  VkInstanceCreateInfo info = {
      .sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
      .pApplicationInfo = &app,
      .enabledLayerCount = sizeof(layers) / sizeof(layers[0]),
      .ppEnabledLayerNames = layers,
      .enabledExtensionCount = sizeof(ext) / sizeof(ext[0]),
      .ppEnabledExtensionNames = ext,
  };

  VkInstance instance;
  CHECKRE(vkCreateInstance(&info, 0, &instance));

  vkl_load_instance_functions(instance);

  uint32_t count;
  CHECKRE(vkEnumeratePhysicalDevices(instance, &count, 0));

  std::vector<VkPhysicalDevice> buff(count);

  CHECKRE(vkEnumeratePhysicalDevices(instance, &count, buff.data()));

  VkPhysicalDevice pdev = buff.front();

  // device
  {
    float prio = 1.f;

    VkDeviceQueueCreateInfo qinfo = {
        .sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,
        .queueCount = 1,
        .pQueuePriorities = &prio};

    const char* ext[] = {"VK_KHR_swapchain"};

    VkDeviceCreateInfo info = {
        .sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
        .queueCreateInfoCount = 1,
        .pQueueCreateInfos = &qinfo,
        .enabledLayerCount = sizeof(layers) / sizeof(layers[0]),
        .ppEnabledLayerNames = layers,
        .enabledExtensionCount = sizeof(ext) / sizeof(ext[0]),
        .ppEnabledExtensionNames = ext,
    };
    VkDevice dev;

    CHECKRE(vkCreateDevice(pdev, &info, 0, &dev));

    // optional loading of function that are specific to the device created
    VklDeviceFunctions dfn;
    vkl_load_device_functions(dev, &dfn);
  }

  printf("Success\n");
}

const char* vk_result_string(VkResult re) {
  switch (re) {
    case VK_SUCCESS:
      return "SUCCESS";
    case VK_NOT_READY:
      return "NOT_READY";
    case VK_TIMEOUT:
      return "TIMEOUT";
    case VK_EVENT_SET:
      return "EVENT_SET";
    case VK_EVENT_RESET:
      return "EVENT_RESET";
    case VK_INCOMPLETE:
      return "INCOMPLETE";
    case VK_ERROR_OUT_OF_HOST_MEMORY:
      return "ERROR_OUT_OF_HOST_MEMORY";
    case VK_ERROR_OUT_OF_DEVICE_MEMORY:
      return "ERROR_OUT_OF_DEVICE_MEMORY";
    case VK_ERROR_INITIALIZATION_FAILED:
      return "ERROR_INITIALIZATION_FAILED";
    case VK_ERROR_DEVICE_LOST:
      return "ERROR_DEVICE_LOST";
    case VK_ERROR_MEMORY_MAP_FAILED:
      return "ERROR_MEMORY_MAP_FAILED";
    case VK_ERROR_LAYER_NOT_PRESENT:
      return "ERROR_LAYER_NOT_PRESENT";
    case VK_ERROR_EXTENSION_NOT_PRESENT:
      return "ERROR_EXTENSION_NOT_PRESENT";
    case VK_ERROR_FEATURE_NOT_PRESENT:
      return "ERROR_FEATURE_NOT_PRESENT";
    case VK_ERROR_INCOMPATIBLE_DRIVER:
      return "ERROR_INCOMPATIBLE_DRIVER";
    case VK_ERROR_TOO_MANY_OBJECTS:
      return "ERROR_TOO_MANY_OBJECTS";
    case VK_ERROR_FORMAT_NOT_SUPPORTED:
      return "ERROR_FORMAT_NOT_SUPPORTED";
    case VK_ERROR_FRAGMENTED_POOL:
      return "ERROR_FRAGMENTED_POOL";
    case VK_ERROR_UNKNOWN:
      return "ERROR_UNKNOWN";
    case VK_ERROR_OUT_OF_POOL_MEMORY:
      return "ERROR_OUT_OF_POOL_MEMORY";
    case VK_ERROR_INVALID_EXTERNAL_HANDLE:
      return "ERROR_INVALID_EXTERNAL_HANDLE";
    case VK_ERROR_FRAGMENTATION:
      return "ERROR_FRAGMENTATION";
    case VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS:
      return "ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS";
    case VK_ERROR_SURFACE_LOST_KHR:
      return "ERROR_SURFACE_LOST_KHR";
    case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR:
      return "ERROR_NATIVE_WINDOW_IN_USE_KHR";
    case VK_SUBOPTIMAL_KHR:
      return "SUBOPTIMAL_KHR";
    case VK_ERROR_OUT_OF_DATE_KHR:
      return "ERROR_OUT_OF_DATE_KHR";
    case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR:
      return "ERROR_INCOMPATIBLE_DISPLAY_KHR";
    case VK_ERROR_VALIDATION_FAILED_EXT:
      return "ERROR_VALIDATION_FAILED_EXT";
    case VK_ERROR_INVALID_SHADER_NV:
      return "ERROR_INVALID_SHADER_NV";
    case VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT:
      return "ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT";
    case VK_ERROR_NOT_PERMITTED_EXT:
      return "ERROR_NOT_PERMITTED_EXT";
    case VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT:
      return "ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
    case VK_THREAD_IDLE_KHR:
      return "THREAD_IDLE_KHR";
    case VK_THREAD_DONE_KHR:
      return "THREAD_DONE_KHR";
    case VK_OPERATION_DEFERRED_KHR:
      return "OPERATION_DEFERRED_KHR";
    case VK_OPERATION_NOT_DEFERRED_KHR:
      return "OPERATION_NOT_DEFERRED_KHR";
    case VK_PIPELINE_COMPILE_REQUIRED_EXT:
      return "PIPELINE_COMPILE_REQUIRED_EXT";
    case VK_RESULT_MAX_ENUM:
      return "RESULT_MAX_ENUM";
  }
  return "";
}
