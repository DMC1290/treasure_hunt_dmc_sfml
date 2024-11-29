#include "tile.h"
#include <iostream>


Tile::Tile()
{
	if (!sand_texture_.loadFromFile("sprite\\sand_tile.png"))
	{
		// Gestion de l'erreur de chargement
		std::cout << "Erreur de chargement de la texture sand_tile.png" << std::endl;
	}
	sand_sprite_.setTexture(sand_texture_);
	sand_sprite_.setOrigin(0, 0);
	sand_sprite_.setScale(1, 1);


	if (!hole_texture_.loadFromFile("sprite\\hole.png"))
	{
		// Gestion de l'erreur de chargement
		std::cout << "Erreur de chargement de la texture hole.png" << std::endl;
	}
	hole_sprite_.setTexture(hole_texture_);
	hole_sprite_.setOrigin(0,0);
	hole_sprite_.setScale(1, 1);

	if (!chest_texture_.loadFromFile("sprite\\chest.jpg"))
	{
		// Gestion de l'erreur de chargement
		std::cout << "Erreur de chargement de la texture chest.jpg" << std::endl;
	}
	chest_sprite_.setTexture(chest_texture_);
	chest_sprite_.setOrigin(0, 0);
	chest_sprite_.setScale(1, 1);
}