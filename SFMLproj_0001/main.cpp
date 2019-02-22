#include <iostream>
#include <SFML\Graphics.hpp>

int main()
{
	//so :: accesses library functions and . accesses object's fields and functions?
	sf::RenderWindow window(sf::VideoMode(720, 720), "SFML works?! NANI?!"); //Guess: Creates new variable then makes the window, choose size and window title. Similar like haxe's new() but without the new()
	sf::CircleShape shape(100.f); //shape variable and renders a circle
	shape.setFillColor(sf::Color::Green); //uses shape's setFillColor function?
	sf::Vector2f position;

	while (window.isOpen()) //This keeps the window open?
	{
		sf::Event event;
		
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if(sf::Keyboard::isKeyPressed(sf::Keyboard::F))
		{
			shape.move(1.f, 1.f);
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}