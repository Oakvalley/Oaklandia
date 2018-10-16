#include "TextureManager.h"
#include <iostream>

/*	for (auto i : m_sprites) {
		p_window->draw(*i);
	}
*/

TextureManager::TextureManager(){
	
}


TextureManager::~TextureManager(){
}


void TextureManager::load(sf::Texture* p_texture, const std::string& fileName, const sf::IntRect& textureSize) {
	p_texture->loadFromFile(fileName, textureSize);
	add(p_texture);
}

void TextureManager::add(sf::Texture* p_texture) {
	m_textures.push_back(p_texture);
}

void TextureManager::clean() {
	while (!m_textures.empty()) {
		m_textures.pop_back();
	}
}