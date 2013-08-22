#pragma once
class Vector2
{
	
private:
	//float magnitude;
public:

	float x;
	float y;

	Vector2(void);
	Vector2(float _x,float _y);
	~Vector2(void);

	Vector2 operator +(const Vector2* v1);
	Vector2 operator -(const Vector2* v1);
	Vector2 operator *(float scaler);
	void operator =(const Vector2* newPos);
	void operator +=(const Vector2* v1);
	void operator -=(const Vector2* v1);
	void operator *=(float scaler);
	bool operator ==(const Vector2* v1);

	float Length();
	float LengthSQRD();


};

