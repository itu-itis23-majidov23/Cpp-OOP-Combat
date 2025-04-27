#include "../include/Enemy.h"


void Enemy::updateHealth(int amount) {
    health += amount;
}

void Enemy::defend(int damage) {
    updateHealth(-damage);
}

bool Enemy::isAlive() const {
    return health > 0;
}

int Enemy::getDamage() const {
    return baseDamage;
}

int Enemy::getHealth() const {
    return health;
}
