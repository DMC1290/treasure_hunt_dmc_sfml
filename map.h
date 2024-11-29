#pragma once

#include <array>
#include <SFML/Graphics/RenderWindow.hpp>

#include "tile.h"

constexpr int kRowSize = 5;
constexpr int kColSize = 5;

class Map
{
public:

	Map();

	void DisplayMap(sf::RenderWindow& window);

	void HandleClick(int x, int y);

	void PlaceTreasure();

private:
	std::array<Tile, kRowSize* kColSize> tiles_array_;
	std::array<int, kRowSize* kColSize> map_;

	int treasure_index_;

};