#include "Player.h"

Player::Player()
{

}
Player::~Player()
{
	
}

void Player::handleInput(float dt)
{

	
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		
		move(velocity * dt);

	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{

		move(-velocity * dt);
	}

	if (input->isKeyDown(sf::Keyboard::Up))
	{
		move(velocity * dt);
	}

	if (input->isKeyDown(sf::Keyboard::Down))
	{
		move(velocity * dt);
	}
		
	
	
}





