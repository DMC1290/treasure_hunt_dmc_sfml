#pragma once

#include <SFML/Graphics.hpp>

#include "player.h"
#include "map.h"
#include "tile.h"

class Game
{
public:
	
	void GameStruct();
	void GameLoop();

private:
	sf::RenderWindow window_;

	Map map_;
	Player player_;
};

