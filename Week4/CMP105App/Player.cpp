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





