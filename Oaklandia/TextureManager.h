#pragma once
#include <SFML\Graphics.hpp>
#include <string>
#include "GameStateManager.h"

class GameStateManager;
class TextureManager
{
public:
	TextureManager();
	~TextureManager();


	void load(sf::Texture*, sf::Sprite*);
	sf::Texture* getTexture() { return m_texture; }
	void draw(sf::RenderWindow* p_window);
	void add(sf::Sprite* p_sprite) { m_sprites.push_back(p_sprite); }
	void clean();

private:
	void setTexture(sf::Texture* p_texture) { m_sprite->setTexture(*p_texture); };
	sf::Texture* m_texture;
	sf::Sprite* m_sprite;
	std::vector<sf::Sprite*> m_sprites;
};

