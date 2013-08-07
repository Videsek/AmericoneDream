#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


int main()
{
	//create a muthafucking window
	sf::RenderWindow window(sf::VideoMode(1024,768),"fucking window");
	sf::CircleShape shape(500.f);
	shape.setFillColor(sf::Color::Green);

	while(window.isOpen())
	{
		sf::Event eventy;
		while(window.pollEvent(eventy))
		{
			if(eventy.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}