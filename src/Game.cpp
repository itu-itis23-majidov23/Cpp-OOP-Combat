#include "../include/Game.h"
#include <iostream>


void Game::selectPlayer(bool selection) {
    selectedPlayer = selection;
}

void Game::playTurn() {
    if (selectedPlayer == 0) {
        armoredPlayer.attack(enemy);
        if (enemy.isAlive()) {
            armoredPlayer.defend(enemy.getDamage());
        }
        std::cout << "Player Health: " << armoredPlayer.getHealth() << " | Enemy Health: " << enemy.getHealth() << "\n";
        if (!armoredPlayer.isAlive() || !enemy.isAlive()) {
            gameEnded = true;
        }
    } else {
        healerPlayer.attack(enemy);
        if (enemy.isAlive()) {
            healerPlayer.defend(enemy.getDamage());
        }
        std::cout << "Player Health: " << healerPlayer.getHealth() << " | Enemy Health: " << enemy.getHealth() << "\n";
        if (!healerPlayer.isAlive() || !enemy.isAlive()) {
            gameEnded = true;
        }
    }
}
