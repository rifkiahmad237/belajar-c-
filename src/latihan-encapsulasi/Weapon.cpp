#include "Weapon.h"

Weapon::Weapon(const char *name, double power) {
    this->name = name;
    this->power = power;
}

double Weapon::getPower() {
    return this->power;
}

std::string Weapon::getWeaponName() {
    return this->name;
}