#include <iostream>
#include <cstdlib>
#include <ctime>
#include "include/Game.h"


int main() {
    srand(time(0));

    bool weaponChoice, playerChoice;
    std::cout << "Select weapon (0 for Sword, 1 for Dagger): ";
    std::cin >> weaponChoice;

    ArmoredPlayer armoredPlayer;
    HealerPlayer healerPlayer;

    armoredPlayer.selectWeapon(weaponChoice);
    healerPlayer.selectWeapon(weaponChoice);

    Game game;
    std::cout << "Select player (0 for Armored, 1 for Healer): ";
    std::cin >> playerChoice;
    game.selectPlayer(playerChoice);

    while (!game.gameEnded) {
        game.playTurn();
        std::cout << "Press Enter to continue...\n";
        std::cin.ignore();
        std::cin.get();
    }

    std::cout << "Game Over!\n";
    return 0;
}
