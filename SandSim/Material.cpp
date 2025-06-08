#include "Material.h"

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
