#include "Mouse.h"

enum button {
	LEFT
};

Mouse::Mouse()
{
	
}


Mouse::~Mouse()
{
}

bool Mouse::isButtonpressed(int button) {

	return m_mouse->isButtonPressed(sf::Mouse::Button(button));
}