#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <memory>
#include <vector>
#include "Bubble.h"  // Include Bubble class

class Game {
private:
    sf::RenderWindow window;
    sf::CircleShape shooter;
    sf::Vector2f shooterPos;
    sf::Texture backgroundTexture;
    sf::Sprite backgroundSprite;
    bool BubbleGameWon = false;
    bool gameOver = false;
    sf::Clock gameClock;
    const float timeLimit = 90.0f;
    sf::Clock endClock;
    bool endTimerStarted = false;

    std::vector<Bubble> bubbles;
    std::unique_ptr<Bubble> currentShot = nullptr;
    sf::Vector2f shotVelocity;
    sf::Font font;
    sf::SoundBuffer oceanBuffer;
    sf::Sound oceanSound;


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
    bool isGameOver() const { return gameOver; }
    bool showInstructions;
    bool getBubbleGameWon();
};
