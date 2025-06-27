#include "Grid.h"

Grid::Grid(int w, int h)
{
	width = w;
	height = h;
	particleMatrix = new Particle*[w];
	for (int i = 0; i < w; i++) {
		particleMatrix[i] = new Particle[h];
	}
}

int Grid::getWidth() const
{
	return width;
}

int Grid::getHeight() const
{
	return height;
}

Particle** Grid::getParticleMatrix()
{
	return particleMatrix;
}
