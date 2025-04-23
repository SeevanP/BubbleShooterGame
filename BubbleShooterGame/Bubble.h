#pragma once
#include <SFML/Graphics.hpp>

class Bubble
{

public:
	sf::CircleShape shape;
	sf::Color color;
	bool isActive;
	Bubble(float x, float y, float radius, sf::Color color);
	void render(sf::RenderWindow& window);
};

