#pragma once
static class Time // I have a basic C# need to gather everything in classes. Even if it was allready written
{
private:
	static float timeElapsed; //in ms
	static float timeElapsedLastFrame;
	static float deltaTime;
	static const int physicsBaseTickrate = 60;
public:
	static int getPhysicsBaseTickrate();
	static float getActualPhysicsTickrate();
	static void updateTime();
	static float getDeltaTime();
};