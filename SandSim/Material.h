#pragma once
#include "SDL3/SDL.h"
class Material {
private:
	float mass;
	float energyDissipation;
	SDL_Color color;
public:
	Material();
	Material(float nMass, float nEnegryDissipation, SDL_Color nColor);
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
	static Material* getMaterial(MaterialType type);
	static void initializeMaterials();
};