# single header vulkan loader


```cpp

//define VKL_IMPL before include
#define VKL_IMPL
#include "vkl.h"

#include <vector>
#include <stdio.h>
#include <stdlib.h>


#define CHECKRE(expr)                                        \
  {                                                          \
    VkResult re = (expr);                                    \
    while (re) {                                             \
      printf("Error: %d\n %s:%d\n", re, __FILE__, __LINE__); \
      abort();                                               \
    }                                                        \
  }


int main() {

  //Initialize
  vkl_init();

  VkApplicationInfo app = {
      .sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
      .apiVersion = VK_API_VERSION_1_2,
  };

  VkInstanceCreateInfo info = {
      .sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
      .pApplicationInfo = &app,
  };

  VkInstance instance;
  CHECKRE(vkCreateInstance(&info, 0, &instance));

  //Load instance level functions

  vkl_load_instance_functions(instance);

  uint32_t count;
  CHECKRE(vkEnumeratePhysicalDevices(instance, &count, 0));

  std::vector<VkPhysicalDevice> buff(count);

  CHECKRE(vkEnumeratePhysicalDevices(instance, &count, buff.data()));
  VkPhysicalDevice pdev = buff.front();


  //Create logical device
    {
    float prio = 1.f;

    VkDeviceQueueCreateInfo qinfo = {
        .sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,
        .queueCount = 1,
        .pQueuePriorities = &prio };

    VkDeviceCreateInfo info = {
        .sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
        .queueCreateInfoCount = 1,
        .pQueueCreateInfos = &qinfo,
    };

    VkDevice dev;

    CHECKRE(vkCreateDevice(pdev, &info, 0, &dev));
    
    //Final step: load device level functions
    vkl_load_device_functions(dev);

    //Here on you can use vulkan as normal
  }

}

```
