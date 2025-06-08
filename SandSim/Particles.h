#pragma once
#include "Material.h"
#include "Physics.h"
class Particle {
private:
	Material* material;
	Vector2 velocity = Vector2(0, 0);
public:
	Particle();
	Vector2 getVelocity() const;
	void applyForce(Vector2 force);
};