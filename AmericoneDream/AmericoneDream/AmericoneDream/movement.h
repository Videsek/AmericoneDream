#pragma once
#include "Vector2.h"
//this class can be used for controllers and such
class Movement
{
public:
	Movement(void);
	~Movement(void);
	void Init(float newSpeed);
	void Update();
	
	//float speed;
	//float jumpSpeed;
	Vector2 LeftStick;
	Vector2 RightStick;
	bool button1;
	bool button2;
	bool button3;
	bool button4;

};

