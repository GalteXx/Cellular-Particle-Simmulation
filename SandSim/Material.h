#pragma once
#include "SDL3/SDL.h"
class Material {
private:
	float mass = 1;
	float energyDissipation = 0;
	SDL_Color color = { 0, 0, 0 };
public:
	SDL_Color getColor() const;
	float getMass() const;
	float getEnergyDissipation() const;
};

enum class MaterialType {
	Air,
	Sand
};

class MaterialContainer {
private:
	static Material* materials;
public:
	Material* getMaterialByIndex();
};