#include "SDL.h"
#include <iostream>
#pragma once
class Game
{
private: 
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;
	int cnt = 0;
public:
	Game();
	~Game();
	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void handleEvent();
	void update();
	void render();
	void clean();

	bool running();
};

