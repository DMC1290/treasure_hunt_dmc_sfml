#pragma once

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class Tile
{
public:
	Tile();

	sf::Sprite GetSandSprite() const { return sand_sprite_; }

	sf::Sprite GetHoleSprite() const { return hole_sprite_; }

	sf::Sprite GetTreasureSprite() const { return chest_sprite_; }

private:
	sf::Texture sand_texture_;
	sf::Sprite sand_sprite_;

	sf::Texture hole_texture_;
	sf::Sprite hole_sprite_;

	sf::Texture chest_texture_;
	sf::Sprite chest_sprite_;
};