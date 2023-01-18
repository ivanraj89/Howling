#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Howling 
{
	class HOWLING_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	
	};

}

// Core log macros
#define HW_CORE_TRACE(...)     ::Howling::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HW_CORE_INFO(...)      ::Howling::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HW_CORE_WARN(...)      ::Howling::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HW_CORE_ERROR(...)     ::Howling::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HW_CORE_FATAL(...)     ::Howling::Log::GetCoreLogger()->fatal(__VA_ARGS__)
								 
								 
// Client log macros			 
#define HW_TRACE(...)          ::Howling::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HW_INFO(...)           ::Howling::Log::GetClientLogger()->info(__VA_ARGS__)
#define HW_WARN(...)           ::Howling::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HW_ERROR(...)          ::Howling::Log::GetClientLogger()->error(__VA_ARGS__)
#define HW_FATAL(...)          ::Howling::Log::GetClientLogger()->fatal(__VA_ARGS__)

