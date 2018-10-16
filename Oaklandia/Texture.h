#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

class Texture {

public:
	Texture() { m_texture = new sf::Texture;
	m_texture->loadFromFile("../Textures/rect.png");
	int p = 0;
	}
	~Texture() {};
	virtual void load(sf::Texture*,const std::string&, const sf::IntRect&) = 0;
	//virtual void add(Texture*);
	virtual void clean() = 0;
	sf::Texture* getTexture() { return m_texture; }

protected:
	sf::Texture* m_texture;
	
};