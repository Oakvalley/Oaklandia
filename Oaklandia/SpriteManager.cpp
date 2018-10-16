#include "SpriteManager.h"



SpriteManager::SpriteManager()
{
}


SpriteManager::~SpriteManager()
{
}

void SpriteManager::load(sf::Texture* p_texture, sf::Sprite* p_sprite) {
	p_sprite->setTexture(*p_texture);
	p_sprite->setOrigin(p_sprite->getTextureRect().width / 2.0f, p_sprite->getTextureRect().height / 2.0f);
	add(p_sprite);
}

void SpriteManager::clean() {
	while (!m_sprites.empty()) {
		m_sprites.pop_back();
	}
}

void SpriteManager::add(sf::Sprite* p_sprite) {
	m_sprites.push_back(p_sprite);

}