#include "Player.h"

Player::Player(sf::Vector2u* x)
{

}
Player::~Player()
{
	
}

void Player::handleInput(float dt)
{



	if (input->isKeyDown(sf::Keyboard::Right))
	{
		
		move(10,0 * dt);

	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{

		move(-10, 0 * dt);
	}

	if (input->isKeyDown(sf::Keyboard::Up))
	{
		move(0,-150 * dt);
	}

	if (input->isKeyDown(sf::Keyboard::Down))
	{
		move(0,150 * dt);
	}
		

	
}

void Player::update(float dt)
{

	//MAXIMUM
	if (getPosition().x + velocity.x * dt > windowSize->x - getSize().x)
	{
		move(0, 0 * dt);

	}

	if (getPosition().y + velocity.y * dt > windowSize->y - getSize().y)
	{
		move(0, 0 * dt);

	}
	//MINIMUM
	if (getPosition().x + velocity.x * dt < windowSize->x - getSize().x)
	{
		move(0, 0 * dt);

	}

	if (getPosition().y + velocity.y * dt < windowSize->y - getSize().y)
	{
		move(0, 0 * dt);

	}
}




