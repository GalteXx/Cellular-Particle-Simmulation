#pragma once
#include "SDL3/SDL.h"
#include "Grid.h"
class GridRenderer{
private:
	int cellSize;
	SDL_Window* window;
	SDL_Renderer* renderer;
	Grid* simulationGrid;

public:
	GridRenderer(int nCellSize, Grid* nSimulationGrid);
	void Render();

};