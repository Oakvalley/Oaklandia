#pragma once
#include "State.h"
#include <vector>
#include <SFML\Graphics.hpp>
#include "TextureManager.h"
#include "Mouse.h"

class State;
class GameStateManager
{
public:
	GameStateManager();
	void changeState(State* p_state);
	void pushState(State* p_state);
	void popState();
	void update(GameStateManager*, sf::RenderWindow*, float);
	void initialize(GameStateManager*);
	void handleEvents(sf::RenderWindow*, GameStateManager*);
	void draw(sf::RenderWindow*);
	void clear();
	sf::Vector2f getMousePosition(sf::RenderWindow* p_window) { return m_mouse->getMousePosition(p_window); }
	TextureManager* getTextureManager() { return m_textureManager; }

private:
	
	std::vector<State*> m_gameStates;
	TextureManager* m_textureManager;
	Mouse* m_mouse;
	sf::Vector2i m_test;

};

