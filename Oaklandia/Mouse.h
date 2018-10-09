#pragma once
#include <SFML/Graphics.hpp>

class Mouse
{
public:
	Mouse();
	~Mouse();

	bool isButtonpressed(int button);
	sf::Vector2f getMousePosition(sf::RenderWindow* p_window) { return p_window->mapPixelToCoords(m_mouse->getPosition(*p_window)); }

private:
	sf::Mouse* m_mouse;

};

