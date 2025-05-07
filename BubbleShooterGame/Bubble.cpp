#include "Bubble.h"

Bubble::Bubble(float x, float y, float radius, sf::Color color)
    : color(color), isActive(true)
{
    shape.setRadius(radius);
    shape.setFillColor(color);
    shape.setPosition(x, y);
}

void Bubble::render(sf::RenderWindow& window)
{
    if (isActive) {
        window.draw(shape);
    }
}
