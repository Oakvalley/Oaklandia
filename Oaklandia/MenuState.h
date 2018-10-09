#pragma once
#include "State.h"


class MenuState : public State
{
public:
	MenuState();
	~MenuState();

	void initialize(GameStateManager*);
	void update(GameStateManager*, sf::RenderWindow*, float);
	void clean();
	void handleEvents(sf::RenderWindow*, GameStateManager*);
	void draw(TextureManager*);
	void drawUI();

private:
	bool m_drawUI;
	int m_menuChoice;
	sf::Texture* m_startButtonTexture;
	sf::Sprite* m_startButton;
	sf::Vector2i m_mousePosition;
	Mouse* m_mouse;
	bool m_hover;

};

