#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "BaseCharacter.h";


int main()
{
	//create a muthafucking window
	sf::RenderWindow window(sf::VideoMode(1024,768),"Testing my new machine");
	sf::CircleShape shape(500.f);
	shape.setFillColor(sf::Color::Green);
	
	BaseCharacter position;
	position.Init();
	while(window.isOpen())
	{
		sf::Event eventy;
		while(window.pollEvent(eventy))
		{
			if(eventy.type == sf::Event::Closed)
				window.close();
		}
		shape.setPosition(0,0);
		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}