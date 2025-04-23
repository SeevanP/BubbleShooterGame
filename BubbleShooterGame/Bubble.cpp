#include "Bubble.h"
#include <SFML/Graphics.hpp>

Bubble::Bubble(float x, float y, float radius, sf::Color color)
    : color(color)
{
    shape.setRadius(radius);
    shape.setFillColor(color);
    shape.setPosition(x, y);
    isActive = true;
}


void Bubble::render(sf::RenderWindow& window)
{
    if (isActive) {
        window.draw(shape);
    }
}
