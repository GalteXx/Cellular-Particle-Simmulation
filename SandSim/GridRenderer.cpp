#include "GridRenderer.h"

GridRenderer::GridRenderer(int nCellSize, Grid* nSimulationGrid)
{
    cellSize = nCellSize;
    simulationGrid = nSimulationGrid;
    SDL_CreateWindowAndRenderer("Sandbox", cellSize * (*simulationGrid).getWidth(), cellSize * (*simulationGrid).getHeight(), 0, &window, &renderer);
    //if (window == NULL || renderer == NULL)
        //throw an exception?
}

void GridRenderer::Render()
{
    auto grid = simulationGrid->getParticleMatrix();
    //maybe iterate over saved "updated cells" later on
    for (int i = 0; i < simulationGrid->getWidth(); i++)
    {
        for (int j = 0; j < simulationGrid->getHeight(); i++) {
            
            int yCoord = i * cellSize, xCoord = j * cellSize;
            SDL_Rect cellRepresentation = { xCoord, yCoord, cellSize, cellSize };
            
        }

    }
}
