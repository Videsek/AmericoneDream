#include "BaseCharacter.h"


BaseCharacter::BaseCharacter(void)
{
}


BaseCharacter::~BaseCharacter(void)
{

}
void BaseCharacter::Init()
{
	speed = 5;
	controls.Init(speed);
}
void BaseCharacter::Update(float dt)
{

}
