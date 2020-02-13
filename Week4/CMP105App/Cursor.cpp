#include "Cursor.h"
Cursor::Cursor(sf::Vector2f* offset)
{
	cursorOffset = offset;
}
Cursor::~Cursor()
{

}

void Cursor::update(float dt)
{

	
	setPosition(input->getMouseX() + cursorOffset->x , input->getMouseY() + cursorOffset->y);
	
	

}
