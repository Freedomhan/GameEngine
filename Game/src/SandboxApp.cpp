#include <iostream>
#include <Engine/Engine.h>

class Game : public Engine::Application {
public:

	Game() {
	
	};

	~Game() {
	
	};

private:

};

Engine::Application* Engine::CreateApplication() {
	return new Game();
}