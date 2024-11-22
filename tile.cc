#include "tile.h"


Tile::Tile()
{
	sand_texture_.loadFromFile("sprite\\sand_tile.png");
	sand_sprite_.setTexture(sand_texture_);
	sand_sprite_.setOrigin(sand_texture_.getSize().x / 2, sand_texture_.getSize().y / 2);
	sand_sprite_.setScale(1, 1);

	hole_texture_.loadFromFile("sprite\\hole.png");
	hole_sprite_.setTexture(hole_texture_);
	hole_sprite_.setOrigin(hole_texture_.getSize().x / 2, hole_texture_.getSize().y / 2);
	hole_sprite_.setScale(1, 1);

	chest_texture_.loadFromFile("sprite\\chest.jpg");
	chest_sprite_.setTexture(chest_texture_);
	chest_sprite_.setOrigin(chest_texture_.getSize().x, chest_texture_.getSize().y);
	chest_sprite_.setScale(1, 1);
}