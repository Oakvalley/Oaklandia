#pragma once
#include "Entity.h"
class Button : public Entity
{
public:
	Button();
	~Button();

	void initialize();
	void load(sf::Sprite*, const sf::Vector2f& c_position);
	void update(float);
	void add(Entity*);
	void remove(Entity*);
	void clean();

};

