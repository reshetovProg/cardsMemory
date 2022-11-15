#pragma once
#include <SFML/Graphics.hpp>
class Card
{
	std::string nom;
	std::string lear;
	sf::Texture cardTexture;
	sf::Sprite cardSprite;
public:
	Card(std::string nom, std::string lear);
	void draw(sf::RenderWindow& window);

};

