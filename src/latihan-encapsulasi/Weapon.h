#pragma once
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
  public:
    Weapon(const char *WeaponName, double power);

    // getter
    double getPower();
    std::string getWeaponName();

  private:
    const char *name;
    double power;
};

#endif