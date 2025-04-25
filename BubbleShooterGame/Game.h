#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Bubble.h"

class Game {
private:
    sf::RenderWindow window;
    sf::CircleShape shooter;
    sf::Vector2f shooterPos;
    sf::Texture backgroundTexture;
    sf::Sprite backgroundSprite;
    bool gameWon = false;


    std::vector<Bubble> bubbles;  // Grid or stuck bubbles

    Bubble* currentShot = nullptr;     // The flying bubble
    sf::Vector2f shotVelocity;         // Direction & speed of the shot

public:
    Game();

    void spawnBubble(float x, float y, sf::Color color);
    void shootBubble();
    void setUpBubble();
    void update();
    void render();
    void handling();
    bool isRunning();
	void setUpLevel();
	void popMatchingBubbles(size_t index);
    sf::Color randomColor();
};
