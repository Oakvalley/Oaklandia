#pragma once
#include <SFML/Graphics.hpp>

class SpriteManager
{
public:
	SpriteManager();
	~SpriteManager();

	void load(sf::Texture*, sf::Sprite*);
	void clean();

private:
	std::vector<sf::Sprite*> m_sprites;
	void add(sf::Sprite*);
};

