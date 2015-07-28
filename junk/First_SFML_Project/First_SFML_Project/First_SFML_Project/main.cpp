#include <SFML\Graphics.hpp>





using namespace sf;
int main()
{

	RenderWindow window(sf::VideoMode(1200, 800), "First_SFML_Project");

	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
	
		window.display();
	}


	return 0;
}