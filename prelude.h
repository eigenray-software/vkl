#pragma once

#include <assert.h>

#ifdef VK_USE_PLATFORM_WIN32_KHR
#undef VK_USE_PLATFORM_WIN32_KHR
#include <vulkan/vulkan.h>
typedef struct HINSTANCE__* HINSTANCE;
typedef struct HWND__* HWND;
typedef struct HMONITOR__* HMONITOR;
typedef void* HANDLE;
typedef struct _SECURITY_ATTRIBUTES SECURITY_ATTRIBUTES;
typedef unsigned long DWORD, *PDWORD, *LPDWORD;
typedef const wchar_t* LPCWSTR;
#include <vulkan/vulkan_win32.h>
#else
#include <vulkan/vulkan.h>
#endif

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
