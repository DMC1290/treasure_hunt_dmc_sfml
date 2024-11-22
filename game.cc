#include "game.h"


// toujours Game struct...
void Game::GameStruct()
{
	window_.create(sf::VideoMode(1280, 720), "Treasure Hunt!");
	// et peut etre la aussi

	std::array<int, kRowSize* kColSize> map{};

	//surement quelques machin par la
}

// on change pas tjr la loop du jeu...
void Game::GameLoop()
{
	window_.setMouseCursorVisible(false);


	while (window_.isOpen())
	{
		//des trucs ici

		sf::Event event;
		while (window_.pollEvent(event))
		{
			if (event.type == sf::Event::MouseMoved)
				player_.SetPosition(sf::Vector2u(event.mouseMove.x, event.mouseMove.y));

			if (event.type == sf::Event::Closed)
				window_.close();

		}

		window_.clear();
		//des trucs ici aussi ( surement des draw(s) )
		window_.draw(player_);

		window_.display();
	}

	window_.setMouseCursorVisible(true);
}