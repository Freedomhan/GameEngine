#pragma once
#include "Engine.h"
#ifdef PLATFORM_WIN

extern Engine::Application* Engine::CreateApplication();

int main(int argc,char** argv) {
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif // PLATFORM_WIN
