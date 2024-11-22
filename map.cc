
#include <array>
#include <ctime>

#include "map.h"

Map::Map()
{

}

int Map::RandomNumber()
{
	srand(time(NULL));

	static bool seeded = false;

	if (!seeded)
	{
		srand(time(NULL));
		seeded = true;
	}

	return rand() % 25;
}

void Map::DisplayMap(std::array<int, kRowSize* kColSize>& map)
{
	for (int j = 0; j < kRowSize; ++j)
	{


	}

	for(int i = 0; i < kColSize; ++i)
	{


	}
}