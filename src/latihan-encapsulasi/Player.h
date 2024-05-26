#pragma once
#ifndef PLAYER_H
#define PLAYER_H

// #include <iostream>
#include "Weapon.h"
#include <string>

class Player {
  private:
    const char *name;
    double health;
    Weapon *weapon;
    /* data */
  public:
    Player(const char *name);
    void display();
    void attack(Player *player);

    // getter
    std::string getName();
    void equipWeapon(Weapon *weapon);
    // ~Player();
};

#endif