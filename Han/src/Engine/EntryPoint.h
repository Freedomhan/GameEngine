#pragma once
#include "../Engine.h"
#include "Application.h"
#ifdef PLATFORM_WIN
extern Engine::Application* Engine::CreateApplication();

int main(int argc,char** argv) {

	Engine::Log::Init();
	Engine_Core_Warn("Log init!");
	Engine_Info("Hello {0}", "hanshaoqiu!");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
	while (true)
	{

	}
	return 0;
}
#endif // PLATFORM_WIN
