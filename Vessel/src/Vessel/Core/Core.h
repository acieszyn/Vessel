#pragma once

#include <memory>

#ifdef VSSL_PLATFORM_WINDOWS
#if VSSL_DYNAMIC_LINK
#ifdef VSSL_BUILD_DLL
#define VESSEL_API __declspec(dllexport)
#else
#define VESSEL_API __declspec(dllimport)
#endif
#else
#define VESSEL_API
#endif
#else
#error Vessel only supports Windows!
#endif

#ifdef VSSL_DEBUG
#define VSSL_ENABLE_INSERTS
#endif

#ifdef VSSL_ENABLE_ASSERTS
#define VSSL_ASSERT(x, ...) { if(!(x)) { VSSL_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#define VSSL_CORE_ASSERT(x, ...) { if(!(x)) { VSSL_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define VSSL_ASSERT(x, ...)
#define VSSL_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#define VSSL_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)

namespace Vessel {

	template<typename T>
	using Scope = std::unique_ptr<T>;

	template<typename T>
	using Ref = std::shared_ptr<T>;

}