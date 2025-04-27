#ifndef WEAPON_H
#define WEAPON_H


class Enemy; // Forward declaration

class Weapon {
protected:
    int damage = 40;
    void updateDamage(int amount);
public:
    virtual void attack(Enemy& enemy) = 0;
    virtual ~Weapon() {}
};

class Sword : public Weapon {
public:
    Sword();
    void attack(Enemy& enemy) override;
};

class Dagger : public Weapon {
public:
    Dagger();
    void attack(Enemy& enemy) override;
};


#endif
