#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Enemy.h"


class Game {
private:
    ArmoredPlayer armoredPlayer;
    HealerPlayer healerPlayer;
    Enemy enemy;
    bool selectedPlayer = 0;
public:
    bool gameEnded = false;
    void selectPlayer(bool selection);
    void playTurn();
};


#endif
