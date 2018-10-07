#pragma once
#include "GameStateManager.h"
#include <SFML\Graphics.hpp>
#include "TextureManager.h"

class TextureManager;
class GameStateManager;
class State {

public:
	virtual void initialize(GameStateManager*) = 0;
	virtual void update(GameStateManager*, float elapsedTime) = 0;
	virtual void handleEvents(sf::RenderWindow*, GameStateManager*) = 0;
	virtual void draw(TextureManager*) = 0;
	virtual void clean() = 0;


};