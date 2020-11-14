#pragma once
#include <memory>
#include "Core.h"
#include <spdlog/spdlog.h>
namespace Engine {

	class HAN_API Log {
	public:

		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return m_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return m_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> m_CoreLogger;
		static std::shared_ptr<spdlog::logger> m_ClientLogger;

	};
}

//Engine Log
#define Engine_Core_Warn(...)  ::Engine::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define Engine_Core_Info(...)  ::Engine::Log::GetCoreLogger()->info(__VA_ARGS__);
#define Engine_Core_Error(...) ::Engine::Log::GetCoreLogger()->error(__VA_ARGS__);
#define Engine_Core_Trace(...) ::Engine::Log::GetCoreLogger()->trace(__VA_ARGS__);
//#define Engine_Core_Fatal(...) ::Engine::Log::GetCoreLogger()->fatal(__VA_ARGS__);

//User Log
#define Engine_Warn(...)  ::Engine::Log::GetClientLogger()->warn(__VA_ARGS__);
#define Engine_Info(...)  ::Engine::Log::GetClientLogger()->info(__VA_ARGS__);
#define Engine_Error(...) ::Engine::Log::GetClientLogger()->error(__VA_ARGS__);
#define Engine_Trace(...) ::Engine::Log::GetClientLogger()->trace(__VA_ARGS__);
//#define Engine_Fatal(...) ::Engine::Log::GetClientLogger()->fatal(__VA_ARGS__);
