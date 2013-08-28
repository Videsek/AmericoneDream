#include "BaseCharacter.h"


BaseCharacter::BaseCharacter(void)
{
	position = new Vector2();
}


BaseCharacter::~BaseCharacter(void)
{

}
void BaseCharacter::Init()
{
	speed = 50;
	controls.Init(speed);
}
void BaseCharacter::Update(float dt)
{
	controls.Update();
	position->x += controls.LeftStick.x * speed * dt;
	position->y += controls.LeftStick.y * speed * dt;
	/*if(position->y >500)
		position->y = 500;
	else if(position->y < 0)
		position->y = 0;


	if(position->x >500)
		position->x = 500;
	else if(position->x < 0)
		position->x = 0;*/
	if(controls.button1)
	{
		//do something
	}
	else
	{
		//do something
	}
	if(controls.button2)
	{
		//do something
	}
	else
	{
		//do something
	}
	if(controls.button3)
	{
		//do something
	}
	else
	{
		//do something

	}
	if(controls.button4)
	{
		//do something
	}
	else
	{
		//do something
	}
}
