#pragma once
#include <SFML/Graphics.hpp>
#include "Config.h"
#include <iostream>
class Card
{
	std::string nom;
	std::string lear;
	sf::Texture cardTexture;
	sf::Sprite cardSprite;
public:
	Card(std::string nom, std::string lear);
	void draw(sf::RenderWindow& window);
	void setPosition()

};

