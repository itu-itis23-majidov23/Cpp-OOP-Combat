#ifndef ENEMY_H
#define ENEMY_H


class Enemy {
protected:
    int health = 300;
    int baseDamage = 40;
    void updateHealth(int amount);
public:
    void defend(int damage);
    bool isAlive() const;
    int getDamage() const;
    int getHealth() const;
};


#endif
