#ifndef PLAYER_H
#define PLAYER_H

#include "Weapon.h"
#include "Enemy.h"


class Player {
protected:
    int health = 300;
    Sword sword;
    Dagger dagger;
    bool selectedWeapon = 0;
    void updateHealth(int amount);
public:
    virtual void defend(int damage) = 0;
    void attack(Enemy& enemy);
    bool isAlive() const;
    void selectWeapon(bool selection);
    int getHealth() const;
    virtual ~Player() {}
};

class ArmoredPlayer : public Player {
protected:
    bool isFirstDefence = true;
public:
    void defend(int damage) override;
};

class HealerPlayer : public Player {
public:
    void defend(int damage) override;
};


#endif
