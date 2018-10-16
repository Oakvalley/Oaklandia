#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

class TextureManager
{
public:
	TextureManager();
	~TextureManager();
	void load(sf::Texture*, const std::string&, const sf::IntRect&);	
	void clean();
	

private:
	std::vector<sf::Texture*> m_textures;
	void add(sf::Texture*);
};

