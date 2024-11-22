#ifndef MAP_H
#define MAP_H

#include <array>

#include "tile.h"

constexpr int kRowSize = 5;
constexpr int kColSize = 5;

class Map
{
public:
	Map();

int RandomNumber();

void DisplayMap(std::array<int, kRowSize* kColSize >& map);

private:
	std::array<Tile, kRowSize* kColSize> tiles_;

};
#endif