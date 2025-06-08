#include "Particles.h"
#include "Time.h"


Particle::Particle()
{
    material = Material();
}

Vector2 Particle::getVelocity() const
{
    return velocity;
}

void Particle::applyForce(Vector2 force)
{
    velocity += force / material.getMass() * Time::getDeltaTime();
}

