#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

// Create window

int main() 
{
	sf::RenderWindow window(sf::VideoMode(512, 512),"WINDOW", sf::Style::Close | sf::Style::Resize);

	while (window.isOpen())
	{

		sf::Event sfEvent;
		//This loop is consistent with the sfml event call
		while (window.pollEvent(sfEvent))
		{
			switch (sfEvent.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::Resized:
				std::cout << sfEvent.size.width << " x " << sfEvent.size.height << "\n";
				break;
			case sf::Event::TextEntered:
				printf("%c",sfEvent.text.unicode);
				break;
			
			}

				
		}

	}			

}




