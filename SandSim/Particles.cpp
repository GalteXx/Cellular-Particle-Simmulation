#include "Particles.h"
#include "Time.h"

SDL_Color Particle::getColor()
{
    return color;
}

Vector2 Particle::getVelocity()
{
    return velocity;
}

float Particle::getMass()
{
    return mass;
}

float Particle::getEnergyDissipation()
{
    return energyDissipation;
}

void Particle::applyForce(Vector2 force)
{
    velocity += force / mass * Time::getDeltaTime();
}

