#include <iostream>
#include "SDL3\SDL.h"

static int intialize(SDL_Window* window, SDL_Renderer* renderer)
{
    int cellSize, gridSize;
    std::cout << "Enter Grid Size and Cell Size\n";
    std::cin >> gridSize >> cellSize;
    
    SDL_CreateWindowAndRenderer("Sandbox", cellSize * gridSize, cellSize * gridSize, 0, &window, &renderer);
    if (window == NULL || renderer == NULL)
        return -1;
}

int main()
{
    SDL_Window* window;
    SDL_Renderer* renderer;
    intialize(window, renderer);
    
}