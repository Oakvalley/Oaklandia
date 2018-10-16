#pragma once
#include "Entity.h"
#include "TextureManager.h"
#include <vector>

class EntityManager : public Entity {
public:
	EntityManager();
	~EntityManager();

	void initialize(TextureManager*);
	void load(sf::Sprite*, const sf::Vector2f& c_position);
	void update(float);
	void add(Entity*);
	void remove(Entity*);
	void clean();

private:
	std::vector<Entity*> m_entityList;
	Sprite* m_sprite;
	Texture* m_texture;
};

