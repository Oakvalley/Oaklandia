#pragma once
#include "State.h"

class MenuState : public State
{
public:
	MenuState();
	~MenuState();

	void initialize(GameStateManager*);
	void update(GameStateManager*, float);
	void clean();
	void handleEvents(sf::RenderWindow*, GameStateManager*);
	void draw(TextureManager*);
	void drawUI();

private:
	bool m_drawUI;
	int m_menuChoice;

};

