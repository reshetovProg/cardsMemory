#include "Card.h"

Card::Card(std::string nom, std::string lear)
{
	this->nom = nom;
	this->lear = lear;

	cardTexture.loadFromFile("img\\"+nom+lear+".png");
	float k = W_CARD / cardTexture.getSize().x;
	//std::cout << cardTexture.getSize().x <<" "<< cardTexture.getSize().y;
	cardSprite.scale(k,k);
	cardSprite.setTexture(cardTexture);
}

void Card::draw(sf::RenderWindow& window)
{
	window.draw(cardSprite);
}

void Card::setPosition(float x, float y)
{
	cardSprite.setPosition(x, y);
}
