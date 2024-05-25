#include <iostream>
#include <string>
#include "hero.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Hero *hero1 = new Hero("Rimuru", 50, 20);

    cout << "Data dari public class variabel\n"
         << endl;
    cout << hero1->name << endl;
    cout << hero1->damage << endl;
    cout << hero1->armor << endl;

    hero1->setName("Ucup");
    hero1->setDamage(100);
    hero1->setArmor(70);
    cout << "\nData dari methode class variabel\n"
         << endl;
    cout << hero1->getName() << endl;
    cout << hero1->getDamage() << endl;
    cout << hero1->getArmor() << endl;
    return 0;
}