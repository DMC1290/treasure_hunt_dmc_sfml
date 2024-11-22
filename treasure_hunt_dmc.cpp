#include <array>
#include <SFML/Graphics.hpp>
#include "map.h"


int main()
{
	std::array<int, kRowSize* kColSize> map{};

	sf::RenderWindow window(sf::VideoMode(1280, 720), "Treasure Hunt!");
	

	while (window.isOpen())
	{
		sf::Texture sand_texture;
		sand_texture.loadFromFile("sprite\\sand_tile.png");
		sf::Sprite sand_sprite;
		sand_sprite.setTexture(sand_texture);
		sand_sprite.setOrigin(sand_texture.getSize().x, sand_texture.getSize().y);

		sf::Texture hole_texture;
		hole_texture.loadFromFile("sprite\\hole.png");
		sf::Sprite hole_sprite;
		hole_sprite.setTexture(hole_texture);
		hole_sprite.setOrigin(hole_texture.getSize().x, hole_texture.getSize().y);

		sf::Texture chest_texture;
		chest_texture.loadFromFile("sprite\\chest.jpg");
		sf::Sprite chest_sprite;
		chest_sprite.setTexture(chest_texture);
		chest_sprite.setOrigin(chest_texture.getSize().x, chest_texture.getSize().y);


		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::MouseButtonReleased)
			{
				
			}
		}
	}
	window.clear();
	window.display();
	return 0;
}