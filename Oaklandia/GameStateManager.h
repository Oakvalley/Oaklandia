#pragma once
#include "State.h"
#include <vector>
#include <SFML\Graphics.hpp>
#include "TextureManager.h"

class State;
class GameStateManager
{
public:
	GameStateManager();
	void changeState(State* p_state);
	void pushState(State* p_state);
	void popState();
	void update(GameStateManager*, float);
	void initialize(GameStateManager*);
	void handleEvents(sf::RenderWindow*, GameStateManager*);
	void draw(sf::RenderWindow*);
	void clear();

	TextureManager* getTextureManager() { return m_textureManager; }

private:
	std::vector<State*> m_gameStates;
	TextureManager* m_textureManager;
};

