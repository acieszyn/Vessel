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