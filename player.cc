#include "player.h"



Player::Player()
{
	shovel_texture_.loadFromFile("sprite\\shovel.png");
	shovel_sprite_.setTexture(shovel_texture_);
	shovel_sprite_.setOrigin(shovel_texture_.getSize().x / 2, shovel_texture_.getSize().y / 2);
	shovel_sprite_.setScale(1.f, 1.f);
}

void Player::SetPosition(sf::Vector2u position)
{
	setPosition(sf::Vector2f(position));
}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();

	target.draw(shovel_sprite_, states);
}
