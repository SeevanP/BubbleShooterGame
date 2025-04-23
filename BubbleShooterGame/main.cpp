#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.h"

using namespace std;

int main() {

    Game game;

    while (game.isRunning()) {
        game.handling();
        game.update();
        game.render();
    }

    return 0;

}