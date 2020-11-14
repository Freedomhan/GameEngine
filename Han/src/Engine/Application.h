#pragma once
#include "Core.h"
namespace Engine {

	class HAN_API Application {
	public:
		Application();
		virtual ~Application();
		void Run();	

	};

	Application* CreateApplication(); 
}
