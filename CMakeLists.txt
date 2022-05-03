cmake_minimum_required(VERSION 3.22)

project(vkl)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Vulkan-Headers)

add_library(vkl SHARED ${CMAKE_CURRENT_SOURCE_DIR}/vkl.cpp)

target_include_directories(vkl
                           PUBLIC
                            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Vulkan-Headers/include>
                            $<INSTALL_INTERFACE:include>
                           )

set_target_properties(vkl PROPERTIES PUBLIC_HEADER "${CMAKE_CURRENT_SOURCE_DIR}/vkl.h;${CMAKE_CURRENT_SOURCE_DIR}/prelude.h")

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
  if(WIN32)
    add_executable(test ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    target_link_libraries(test PUBLIC vkl)
  endif()
endif()
