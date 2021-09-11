cmake_minimum_required(VERSION 3.10.2)

project(vkl)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Vulkan-Headers)
add_library(vkl vkl.c)
target_link_libraries(vkl PUBLIC Vulkan-Headers)