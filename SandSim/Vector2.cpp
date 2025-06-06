#include "Physics.h"
#include "math.h"

float Vector2::getX() const
{
	return x;
}

float Vector2::getY() const
{
	return y;
}

void Vector2::setX(float newX)
{
	x = newX;
}

void Vector2::setY(float newY)
{
	y = newY;
}
Vector2 Vector2::getNormal()
{
	return Vector2(y, x);
}
Vector2::Vector2(float newX, float newY)
{
	x = newX;
	y = newY;
}
Vector2 Vector2::getNormalizedVector() const
{
	int invertedLength = 1.0f / getLength();
	return Vector2(x * invertedLength, y * invertedLength);
}

float Vector2::getLength() const
{
	return sqrt(x*x + y*y);
}

Vector2 Vector2::operator+(Vector2& b)
{
	return Vector2(x + b.x, y + b.y);
}

Vector2 Vector2::operator/(float b)
{
	return *this * (1/b);
}

Vector2 Vector2::operator*(float b)
{
	return Vector2(x * b, y * b);
}

Vector2& Vector2::operator+=(const Vector2& b)
{
	x += b.x;
	y += b.y;
	return *this;
}
