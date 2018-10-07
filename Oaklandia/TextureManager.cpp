#include "TextureManager.h"
#include <iostream>


TextureManager::TextureManager()
{
	m_texture = new sf::Texture;
	m_sprite = new sf::Sprite;
}


TextureManager::~TextureManager()
{
	delete m_texture;
	delete m_sprite;
}

void TextureManager::load(sf::Texture* p_texture, sf::Sprite* p_sprite) {

	p_sprite->setTexture(*p_texture);

	add(p_sprite);
}

void TextureManager::draw(sf::RenderWindow* p_window) {
	for (auto i : m_sprites) {
		p_window->draw(*i);
	}
}

void TextureManager::clean() {
	while (!m_sprites.empty()) {
		m_sprites.pop_back();
	}
}