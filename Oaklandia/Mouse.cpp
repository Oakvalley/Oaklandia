#include "Mouse.h"

Mouse::Mouse()
{
	
}


Mouse::~Mouse()
{
}

bool Mouse::isButtonpressed(int button) {

	return sf::Mouse::isButtonPressed(sf::Mouse::Button(button));
}