#pragma once
#include"Framework/GameObject.h"
#include"Framework/Input.h"
#include<iostream>
class Enemy : public GameObject
{
public:
	Enemy(sf::Vector2u* x);
	~Enemy();

	void update(float dt) override;
	sf::Vector2u* windowSize;
	
	


};

