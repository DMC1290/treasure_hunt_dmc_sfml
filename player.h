#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Player : public sf::Transformable, public sf::Drawable
{
public:
	Player();

	void SetPosition(sf::Vector2u position);

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
	sf::Texture shovel_texture_;
	sf::Sprite shovel_sprite_;
};

