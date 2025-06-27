#include "Material.h"

Material::Material()
{
    mass = 0;
    energyDissipation = 0;
    color = { 255, 46, 255 };
}

Material::Material(float nMass, float nEnegryDissipation, SDL_Color nColor)
{
    mass = nMass;
    energyDissipation = nEnegryDissipation;
    color = nColor;
}

SDL_Color Material::getColor() const
{
    return color;
}

float Material::getMass() const
{
    return mass;
}

float Material::getEnergyDissipation() const
{
    return energyDissipation;
}

Material* MaterialContainer::getMaterial(MaterialType type)
{
    return nullptr;
}

void MaterialContainer::initializeMaterials()
{
    materials = new Material[2];
    materials[static_cast<int>(MaterialType::Air)] = Material(1, 0, {0, 0, 0});
    materials[static_cast<int>(MaterialType::Sand)] = Material(4, 0.9, {211, 240, 50});
}
