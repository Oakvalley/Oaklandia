#pragma once
#include "Sprite.h"
#include "Texture.h"

class Entity {

public:
	virtual void initialize() = 0;
	virtual void load(sf::Sprite*, const sf::Vector2f& c_position) = 0;
	virtual void update(float dt) = 0;
	virtual void add(Entity*) = 0;
	virtual void remove(Entity*) = 0;
	virtual void clean() = 0;
};