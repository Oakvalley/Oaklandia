#include "InputManager.h"



InputManager::InputManager()
{
	m_mouse = new Mouse;
}


InputManager::~InputManager()
{
}


bool InputManager::isKeyPressed(keys key) {
	return sf::Keyboard::isKeyPressed(sf::Keyboard::Key(key));
}

bool InputManager::isMouseButtonPressed(Buttons button) {
	return m_mouse->isButtonpressed(button);
}