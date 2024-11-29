#include <array>
#include <ctime>

#include "map.h"


Map::Map()
{
	srand(time(NULL));

	map_.fill(0);

	for (int i = 0; i < kRowSize * kColSize; ++i)
	{
		tiles_array_[i] = Tile();
	}

	PlaceTreasure();
}

void Map::DisplayMap(sf::RenderWindow& window)
{
	sf::Texture sand;
	sand.loadFromFile("sprite\\sand_tile.png");
	sf::Texture hole;
	hole.loadFromFile("sprite\\hole.png");
	sf::Texture chest;
	chest.loadFromFile("sprite\\chest.jpg");

	for (int y = 0; y < kRowSize; ++y)
	{
		for (int x = 0; x < kColSize; ++x)
		{
			int idx = y * kColSize + x;

			float posX = x * 150;
			float posY = y * 150;

			if (map_[idx] == 0)
			{
				tiles_array_[idx].GetSandSprite().setTexture(sand);
				tiles_array_[idx].GetSandSprite().setPosition(posX, posY);
				window.draw(tiles_array_[idx].GetSandSprite());
			}
			else if (map_[idx] == 1)
			{
				tiles_array_[idx].GetHoleSprite().setTexture(hole);
				tiles_array_[idx].GetHoleSprite().setPosition(posX, posY);
				window.draw(tiles_array_[idx].GetHoleSprite());
			}
			else if (map_[idx] == 2)
			{
				tiles_array_[idx].GetTreasureSprite().setTexture(chest);
				tiles_array_[idx].GetTreasureSprite().setPosition(posX, posY);
				window.draw(tiles_array_[idx].GetTreasureSprite());
			}
		}
	}
}

void Map::HandleClick(int x, int y)
{
	int idx = y * kColSize + x;

	if (map_[idx] == 0)
	{
		map_[idx] = 1;
	}

	if (idx == treasure_index_)
	{
		map_[idx] = 2;
	}
}

void Map::PlaceTreasure()
{
	treasure_index_ = rand() % (kRowSize * kColSize);
}