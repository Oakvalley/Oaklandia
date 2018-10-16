#pragma once
#include "State.h"

class MenuState : public State
{
public:
	MenuState();
	~MenuState();

	void initialize(GameStateManager*);
	void update(GameStateManager*, sf::RenderWindow*, InputManager*, float);
	void clean();
	void handleEvents(sf::RenderWindow*, GameStateManager*, InputManager*);
	void draw(TextureManager*);
	void drawUI();

private:
	bool m_drawUI;
	int m_menuChoice;
	sf::Texture* m_startButtonTexture;
	sf::Sprite* m_startButton;
	bool m_hover;
	Texture* m_startTexture;
};

