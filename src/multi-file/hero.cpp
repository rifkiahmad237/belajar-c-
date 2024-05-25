#include "hero.h"
#include <string>
Hero::Hero(const char *name, int damage, int armor)
{
    this->name = name;
    this->damage = damage;
    this->armor = armor;
}

void Hero::setName(const char *name)
{
    this->name = name;
}

void Hero::setDamage(int damage)
{
    this->damage = damage;
}

void Hero::setArmor(int Armor)
{
    this->armor = armor;
}
std::string Hero::getName()
{
    return this->name;
}
int Hero::getDamage()
{
    return this->damage;
}
int Hero::getArmor()
{
    return this->armor;
}