#include "Enemy.h"

Enemy::Enemy(sf::Vector2u* x)
{
	windowSize = x;
}
Enemy::~Enemy()
{

}
 
void Enemy::update(float dt)
{
	
	
	//Maximums
	if (getPosition().x + velocity.x * dt > windowSize->x - getSize().x)
	{
		velocity.x *= -1;
	}

	if(getPosition().y + velocity.y * dt > windowSize->y - getSize().y)
	{
		velocity.y *= -1;
	}

	//Minimums
	if (getPosition().x + velocity.x * dt < 0)
	{
		velocity.x *= -1;
	}

	if (getPosition().y + velocity.y * dt < 0)
	{
		velocity.y *= -1;
	}




	move(velocity* dt);
	

	

}