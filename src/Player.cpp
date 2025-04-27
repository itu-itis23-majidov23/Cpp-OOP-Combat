#include "../include/Player.h"
#include <iostream>
#include <cstdlib>


void Player::updateHealth(int amount) {
    health += amount;
}

void Player::attack(Enemy& enemy) {
    if (selectedWeapon == 0)
        sword.attack(enemy);
    else
        dagger.attack(enemy);
}

bool Player::isAlive() const {
    return health > 0;
}

void Player::selectWeapon(bool selection) {
    selectedWeapon = selection;
}

int Player::getHealth() const {
    return health;
}

void ArmoredPlayer::defend(int damage) {
    if (isFirstDefence) {
        isFirstDefence = false;
        std::cout << "First attack blocked!\n";
    } else {
        int reducedDamage = damage * 0.8;
        updateHealth(-reducedDamage);
    }
}

void HealerPlayer::defend(int damage) {
    int chance = rand() % 100;
    if (chance < 5) {
        std::cout << "Healer healed instead of taking damage!\n";
        updateHealth(20);
    } else {
        updateHealth(-damage);
    }
}
