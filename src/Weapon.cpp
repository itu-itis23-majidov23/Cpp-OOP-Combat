#include "../include/Weapon.h"
#include "../include/Enemy.h"
#include <iostream>
#include <cstdlib>


void Weapon::updateDamage(int amount) {
    damage += amount;
}

Sword::Sword() {
    damage = 60;
}

void Sword::attack(Enemy& enemy) {
    enemy.defend(damage);
    if (damage > 30) {
        updateDamage(-5);
    }
}

Dagger::Dagger() {
    damage = 30;
}

void Dagger::attack(Enemy& enemy) {
    enemy.defend(damage);
    if (rand() % 2 == 0) {
        std::cout << "Dagger hits twice!\n";
        enemy.defend(damage);
    }
}

