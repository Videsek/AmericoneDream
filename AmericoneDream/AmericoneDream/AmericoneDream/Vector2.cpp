#include "Vector2.h"
#include "Math.h"


Vector2::Vector2(void)
{
	x = y = 0;
}
Vector2::Vector2(float _x, float _y)
{
	x = _x;
	y = _y;
}
Vector2::~Vector2(void)
{
}

Vector2 Vector2::operator+(const Vector2* v1)
{
	return Vector2( x + v1->x ,y + v1->y);
}

Vector2 Vector2::operator-(const Vector2* v1)
{
	return Vector2(x - v1->x, y - v1->y);
}

Vector2 Vector2::operator*(float scaler)
{
	return Vector2( x * scaler, y * scaler);
}
void Vector2::operator=(const Vector2* newPos)
{
	x = newPos->x; y = newPos->y;
}
void Vector2::operator+=(const Vector2* v1)
{
	x + v1->x ;y + v1->y;
}

void Vector2::operator-=(const Vector2* v1)
{
	x - v1->x; y - v1->y;
}
void Vector2::operator*=(float scaler)
{
	x * scaler; y * scaler;
}
bool Vector2::operator==(const Vector2* v1)
{
	if(x == v1->x && y == v1->y)
		return true;

	return false;
}

float Vector2::Length()
{
	return  sqrt((x * x + y * y));
}
float Vector2::LengthSQRD()
{
	return (x * x + y * y);
}
