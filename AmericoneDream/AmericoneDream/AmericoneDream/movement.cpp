#include "movement.h"
#include <SFML\Window\Keyboard.hpp>


Movement::Movement(void)
{
	
}


Movement::~Movement(void)
{
}
void Movement::Init(float newSpeed)
{
	//speed = newSpeed;
	//jumpSpeed = 5.0f;
	//position = new Vector2(0,0);
}
void Movement::Update()
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		LeftStick.x = -1;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		LeftStick.x = 1;
	else
		LeftStick.x = 0;

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		LeftStick.y = 1;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		LeftStick.y = -1;
	else 
		LeftStick.y = 0;

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::K))
		button1 = true;
	else
		button1 = false;
	
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::L))
		button2 = true;
	else
		button2 = false;
	
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::O))
		button3 = true;
	else
		button3 = false;
	
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::P))
		button4 = true;
	else
		button4 = false;
}