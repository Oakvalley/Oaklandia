#include "EntityManager.h"



EntityManager::EntityManager()
{
}


EntityManager::~EntityManager()
{
}

void EntityManager::initialize(TextureManager* p_textureManager) {
}

void EntityManager::load(sf::Sprite* p_sprite, const sf::Vector2f& c_position) {

}

void EntityManager::add(Entity* p_entity) {
	m_entityList.push_back(p_entity);
}

void EntityManager::remove(Entity* p_entity) {
	
}

void EntityManager::update(float dt) {

}

void EntityManager::clean() {
	while (!m_entityList.empty()) {
		m_entityList.pop_back();
	}
}