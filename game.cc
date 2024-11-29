#include "game.h"


void Game::GameStruct()
{
	window_.create(sf::VideoMode(1280, 720), "Treasure Hunt!");
}


void Game::GameLoop()
{
	window_.setMouseCursorVisible(false);

	while (window_.isOpen())
	{


		sf::Event event;
		while (window_.pollEvent(event))
		{
			if (event.type == sf::Event::MouseMoved)
				player_.SetPosition(sf::Vector2u(event.mouseMove.x, event.mouseMove.y));

			if (event.type == sf::Event::Closed)
				window_.close();

			if ( event.type == sf::Event::MouseButtonPressed)
			{
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					int x = event.mouseButton.x / 160;
					int y = event.mouseButton.y / 120;
					map_.HandleClick(x, y);
				}
			}
		}

		window_.clear();
		map_.DisplayMap(window_);
		window_.draw(player_);
		window_.display();

	}
	window_.setMouseCursorVisible(true);
}