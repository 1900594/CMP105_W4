#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	playerObject.setInput(input);
	playerObject.setTexture(&texture);
	playerObject.setSize(sf::Vector2f(100, 100));
	playerObject.setPosition(200,200);
	playerObject.setVelocity(50, 50);
	
	texture2.loadFromFile("gfx/goomba.png");
	enemyObject.setTexture(&texture2);
	enemyObject.setSize(sf::Vector2f(100, 100));
	enemyObject.setPosition(600, 200);
	enemyObject.setVelocity(50, 50);

	

	}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	playerObject.handleInput(dt);
	enemyObject.moveEnemy(dt);
}

// Update game objects
void Level::update(float dt)
{
	std::cout << window->getSize().x << "\n";
	std::cout << enemyObject.getPosition().x << "\n";
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(playerObject);
	window->draw(enemyObject);

		endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}