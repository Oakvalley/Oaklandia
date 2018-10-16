#pragma once
#include "State.h"
#include <vector>
#include <SFML\Graphics.hpp>
#include "TextureManager.h"
#include "InputManager.h"

class State;
class InputManager;
class GameStateManager
{
public:
	GameStateManager();
	void changeState(State* p_state);
	void pushState(State* p_state);
	void popState();
	void update(GameStateManager*, sf::RenderWindow*, InputManager*, float);
	void initialize(GameStateManager*);
	void handleEvents(sf::RenderWindow*, GameStateManager*, InputManager*);
	void draw(sf::RenderWindow*);
	void clear();
	TextureManager* getTextureManager() { return m_textureManager; }

private:
	
	std::vector<State*> m_gameStates;
	TextureManager* m_textureManager;
	sf::Vector2i m_test;

};

