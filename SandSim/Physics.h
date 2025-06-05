#pragma once
class Vector2{
private:
	float x;
	float y;
public:
	Vector2(float x, float y);
	float getX() const;
	float getY() const;
	void setX(float newX);
	void setY(float newY);
	Vector2 getNormal();
	Vector2 getNormalizedVector() const;
	float getLength() const;
	Vector2 operator+ (Vector2 b);
};
