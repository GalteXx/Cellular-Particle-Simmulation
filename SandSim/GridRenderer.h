#pragma once
#include "SDL3/SDL.h"
class GridRenderer{
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	int windowWidth;
	int windowHeight;

	
public:
	GridRenderer(int wWidth, int wHeight);
	void Render();

};