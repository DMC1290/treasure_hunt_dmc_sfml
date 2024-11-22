#include "map.h"
#include <array>


int random_number()
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

void DisplayMap(std::array<int, kRowSize* kColSize>& map)
{
	for (int j = 0; j < kRowSize; ++j)
	{
		
	}

	for(int i = 0; i < kColSize; ++i)
	{
		
	}
}
