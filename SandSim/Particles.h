#pragma once
#include "SDL3\SDL_pixels.h"
#include "Physics.h"
class Particle {
private:
	float mass;
	float energyDissipation;
	Vector2 velocity;
	SDL_Color color;
public:
	SDL_Color getColor();
	Vector2 getVelocity();
	float getMass();
	float getEnergyDissipation();
	void applyForce(Vector2 force);
};