#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "BaseCharacter.h";
#include <string.h>
#include <sstream>


int main()
{
	//create a muthafucking window
	sf::RenderWindow window(sf::VideoMode(1024,768),"Testing my new machine");
	sf::CircleShape shape(10.f);
	sf::Clock clock;
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
		sf::Time asdf = clock.getElapsedTime();
		std::stringstream ss;
		ss << asdf.asSeconds();
		window.setTitle(ss.str());
		position.Update(asdf.asSeconds());
		shape.setPosition(position.position->x,position.position->y);
		window.clear();
		window.draw(shape);
		window.display();
		clock.restart();
	}

	return 0;
}