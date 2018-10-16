#pragma once
#include "GameStateManager.h"
#include <SFML\Graphics.hpp>
#include "TextureManager.h"
#include "InputManager.h"
#include "Entity.h"

class TextureManager;
class GameStateManager;
class InputManager;
class State {

public:
	virtual void initialize(GameStateManager*) = 0;
	virtual void update(GameStateManager*, sf::RenderWindow*, InputManager*, float) = 0;
	virtual void handleEvents(sf::RenderWindow*, GameStateManager*, InputManager*) = 0;
	virtual void draw(TextureManager*) = 0;
	virtual void clean() = 0;


};