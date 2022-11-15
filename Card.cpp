#include "Card.h"

Card::Card(std::string nom, std::string lear)
{
	this->nom = nom;
	this->lear = lear;

	cardTexture.loadFromFile("img\\"+nom+lear+".png");
	//cardSprite.set
	cardSprite.setTexture(cardTexture);
}

void Card::draw(sf::RenderWindow& window)
{
	window.draw(cardSprite);
}
