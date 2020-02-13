#pragma once
#include "Framework/GameObject.h"

class Cursor : public GameObject
{
public: 
	Cursor(sf::Vector2f* offset);
	~Cursor();

	void update(float dt) override;
	sf::Vector2f* cursorOffset;
};

