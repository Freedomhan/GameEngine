#include "Application.h"
#include "Event/ApplicationEvent.h"
#include "Log.h"
#include "../EnginePch.h"
namespace Engine {

	Application::Application() {

	}

	Application::~Application() {
	
	}

	void Application::Run() {
		WindowResizeEvent e(1080,1000);
		Engine_Trace(e.ToString());
		while (true);
	}
}