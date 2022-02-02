cmake_minimum_required(VERSION 3.22)

project(vkl)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Vulkan-Headers)
add_library(vkl ${CMAKE_CURRENT_SOURCE_DIR}/vkl.cpp)

target_include_directories(vkl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(vkl PUBLIC Vulkan-Headers)

add_executable(test ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
target_link_libraries(test PUBLIC vkl)