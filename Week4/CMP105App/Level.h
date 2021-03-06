#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Cursor.h"
#include "Background.h"
class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	sf::Vector2u windowSize;

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	// Level objects
	GameObject testSprite;
	sf::Texture texture;
	sf::Texture texture2;
	sf::Texture texture3;
	sf::Texture texture4;
	sf::Texture background;
	sf::View moveView;
	GameObject* playerObject;
	GameObject* enemyObject;
	GameObject* enemyObject2;
	GameObject* cursorObject;
	GameObject* gameBackground;
	sf::Vector2f cursorOffset;
	sf::Vector2f rightCentre;
	sf::Vector2f leftCentre;
};