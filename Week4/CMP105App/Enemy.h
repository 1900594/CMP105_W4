#pragma once
#include"Framework/GameObject.h"
#include"Framework/Input.h"
#include<iostream>
class Enemy : public GameObject, private Input
{
public:
	Enemy();
	~Enemy();

	void moveEnemy(float dt);

	


};

