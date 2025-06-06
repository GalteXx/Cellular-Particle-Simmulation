#include "Time.h"
#include "SDL3\SDL_timer.h"

float Time::timeElapsed = 0;
float Time::timeElapsedLastFrame = 0;
float Time::deltaTime;

int Time::getPhysicsBaseTickrate()
{
    return physicsBaseTickrate;
}

float Time::getActualPhysicsTickrate()
{
    return 0.0f;//i'll figure something out later. It's for testing anyway...
}

void Time::updateTime()
{
    timeElapsedLastFrame = timeElapsed;
    timeElapsed = SDL_GetTicks();
    deltaTime = timeElapsed - timeElapsedLastFrame;
}

float Time::getDeltaTime()
{
    return deltaTime;
}

