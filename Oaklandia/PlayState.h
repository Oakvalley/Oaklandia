#pragma once
#include "State.h"

class PlayState : public State
{
public:
	PlayState();
	~PlayState();

	void initialize(GameStateManager*);
	void update(GameStateManager*, sf::RenderWindow*, InputManager*, float);
	void handleEvents(sf::RenderWindow*, GameStateManager*, InputManager*);
	void draw(TextureManager*);
	void clean();
};

