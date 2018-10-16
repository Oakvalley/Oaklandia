#pragma once
#include <SFML/Graphics.hpp>
#include "Mouse.h"

class InputManager
{
public:
	InputManager();
	~InputManager();

	enum keys {
		A,
		B,
		Enter = 58,

		keyCount
	};

	enum Buttons {
		Left
	};

	bool isKeyPressed(keys key);
	bool isMouseButtonPressed(Buttons key);
	sf::Vector2f getMousePosition(sf::RenderWindow* p_window) { return m_mouse->getMousePosition(p_window); }

private:
	Mouse* m_mouse;
};

