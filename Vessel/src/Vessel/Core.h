#pragma once

#ifdef VSSL_PLATFORM_WINDOWS
#ifdef VSSL_BUILD_DLL
#define VESSEL_API __declspec(dllexport)
#else
#define VESSEL_API __declspec(dllimport)
#endif
#else
#error Vessel only supports Windows!
#endif

#ifdef VSSL_ENABLE_ASSERTS
#define VSSL_ASSERT(x, ...) { if(!(x)) { VSSL_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#define VSSL_CORE_ASSERT(x, ...) { if(!(x)) { VSSL_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define VSSL_ASSERT(x, ...)
#define VSSL_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)