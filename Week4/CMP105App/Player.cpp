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
		
		move(500 * dt,0 );

	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{

		move(-500 * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::Up))
	{
		move(0,-500 * dt);
	}

	if (input->isKeyDown(sf::Keyboard::Down))
	{
		move(0,500 * dt);
	}
		

	
}

void Player::update(float dt)
	{

	}






