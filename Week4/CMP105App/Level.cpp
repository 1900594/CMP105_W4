#include "Level.h"


Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	enemyObject = new Enemy(&windowSize);
	enemyObject2 = new Enemy(&windowSize);
	playerObject = new Player(&windowSize);
	cursorObject = new Cursor(&cursorOffset);
	gameBackground = new Background;

	rightCentre = sf::Vector2f(moveView.getCenter().x + (window->getSize().x * 0.5), (moveView.getCenter().y + (window->getSize().y * 0.5)));
	leftCentre = sf::Vector2f(moveView.getCenter().x - (window->getSize().x * 0.5), (moveView.getCenter().y - (window->getSize().y * 0.5)));

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	playerObject->setInput(input);
	playerObject->setTexture(&texture);
	playerObject->setSize(sf::Vector2f(100, 100));
	playerObject->setPosition(200,200);
	playerObject->setVelocity(10, 10);
	
	texture2.loadFromFile("gfx/AsianLady.png");
	enemyObject->setTexture(&texture2);
	enemyObject->setSize(sf::Vector2f(100, 100));
	enemyObject->setPosition(600, 200);
	enemyObject->setVelocity(80, 80);

	texture3.loadFromFile("gfx/AsianLady.png");
	enemyObject2->setTexture(&texture3);
	enemyObject2->setSize(sf::Vector2f(100, 100));
	enemyObject2->setPosition(100, 400);
	enemyObject2->setVelocity(100, 100);

	texture4.loadFromFile("gfx/icon.png");
	cursorObject->setTexture(&texture4);
	cursorObject->setSize(sf::Vector2f(100, 100));
	cursorObject->setPosition(100, 400);
	cursorObject->setInput(input);

	background.loadFromFile("gfx/Level1_1.png");
	gameBackground->setTexture(&background);
	gameBackground->setSize(sf::Vector2f(11038, 675));






	

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
	playerObject->handleInput(dt);

	if (input->isKeyDown(sf::Keyboard::D) && rightCentre.x < background.getSize().x)
	{
		input->setKeyUp(sf::Keyboard::D);
		moveView = window->getView();
		moveView.move(25000 *dt,0);
		window->setView(moveView);
	}

	if (input->isKeyDown(sf::Keyboard::A) && leftCentre.x > 0)
	{
		input->setKeyUp(sf::Keyboard::A);
		moveView = window->getView();
		moveView.move(-25000 * dt, 0);
		window->setView(moveView);
	}
}

// Update game objects
void Level::update(float dt)
{



	cursorOffset = sf::Vector2f(moveView.getCenter().x - (window->getSize().x * 0.5),(moveView.getCenter().y - (window->getSize().y * 0.5)));

	rightCentre = sf::Vector2f(moveView.getCenter().x + (window->getSize().x * 0.5), (moveView.getCenter().y + (window->getSize().y * 0.5)));
	leftCentre = sf::Vector2f(moveView.getCenter().x - (window->getSize().x * 0.5), (moveView.getCenter().y - (window->getSize().y * 0.5)));


	std::cout << window->getSize().x << "\n";
	std::cout << enemyObject->getPosition().x << "\n";
	windowSize = window->getSize();
	enemyObject->update(dt);
	enemyObject2->update(dt);
	cursorObject->update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(*gameBackground);
	window->draw(*playerObject);
	window->draw(*enemyObject);
	window->draw(*enemyObject2);
	window->draw(*cursorObject);

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