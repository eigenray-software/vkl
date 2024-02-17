
project(eigenray_vkl)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Vulkan-Headers)

add_library(eigenray_vkl STATIC ${CMAKE_CURRENT_SOURCE_DIR}/vkl.cpp)

target_include_directories(eigenray_vkl
                           PUBLIC
                            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Vulkan-Headers/include>
                            $<INSTALL_INTERFACE:include>
                           )

set_target_properties(eigenray_vkl PROPERTIES PUBLIC_HEADER "${CMAKE_CURRENT_SOURCE_DIR}/vkl.h;${CMAKE_CURRENT_SOURCE_DIR}/prelude.h")

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
  if(WIN32)
    set(CMAKE_CXX_STANDARD 20)
    add_executable(test ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    target_link_libraries(test PUBLIC eigenray_vkl)
  endif()
endif()
