#pragma once
#include "Particles.h"
class Grid {
private:
	int width;
	int height;
	Particle** particleMatrix;
public:
	Grid(int w, int h);
	int getWidth() const;
	int getHeight() const;
	Particle** getParticleMatrix();
};