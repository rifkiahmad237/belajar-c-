#include "Player.h"
#include <iostream>
Player::Player(const char *name) {
    this->name = name;
    this->health = 100;
}

void Player::display() {
    std::cout << "Player name: " << this->name << std::endl;
    std::cout << "Player Health: " << this->health << std::endl;
    std::cout << "Player weapon: " << this->weapon->getWeaponName() << std::endl;
    std::cout << "Player Power: " << this->weapon->getPower() << std::endl;
}

void Player::attack(Player *player) {
    if (this->health <= 0) {
        std::cout << this->name << " sudah meninggal" << std::endl;
        std::cout << this->name << " tidak dapat menyerang" << std::endl;
    } else {
        std::cout << this->name << " menyerang " << player->getName() << std::endl;
    }
}
std::string Player::getName() {
    return this->name;
}
void Player::equipWeapon(Weapon *weapon) {
    this->weapon = weapon;
}