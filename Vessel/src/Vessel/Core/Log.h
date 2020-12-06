#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Vessel {

	class VESSEL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define VSSL_CORE_TRACE(...)	::Vessel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define VSSL_CORE_INFO(...)		::Vessel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define VSSL_CORE_WARN(...)		::Vessel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define VSSL_CORE_ERROR(...)	::Vessel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define VSSL_CORE_CRITICAL(...)	::Vessel::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define VSSL_TRACE(...)			::Vessel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define VSSL_INFO(...)			::Vessel::Log::GetClientLogger()->info(__VA_ARGS__)
#define VSSL_WARN(...)			::Vessel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define VSSL_ERROR(...)			::Vessel::Log::GetClientLogger()->error(__VA_ARGS__)
#define VSSL_CRITICAL(...)		::Vessel::Log::GetClientLogger()->critical(__VA_ARGS__)