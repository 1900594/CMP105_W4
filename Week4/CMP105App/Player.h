#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"


class Player : public GameObject, private Input {
public:
	Player(sf::Vector2u* x);
	~Player();


	void handleInput(float dt) override;
	void update(float dt) override;
	sf::Vector2u* windowSize;
};

