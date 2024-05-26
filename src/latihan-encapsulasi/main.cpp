#include "Player.h"
#include "Weapon.h"
#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {

    Player *player1 = new Player("ucup");
    Weapon *weapon1 = new Weapon("pedang", 100);
    player1->equipWeapon(weapon1);
    player1->display();

    Player *player2 = new Player("dimas");
    Weapon *weapon2 = new Weapon("perisai", 50);
    player2->equipWeapon(weapon2);
    player2->display();

    player1->attack(player2);
    player2->attack(player1);

    delete player1, player2, weapon1, weapon2;
    return 0;
}
