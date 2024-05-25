#include <iostream>
#include <string>

using namespace std;

class Hero
{
public:
    string name;
    int damage;
    int armor;

    Hero(const char *name, int damage, int armor);
    void setName(const char *);
    void setDamage(int);
    void setArmor(int);

    string getName();
    int getDamage();
    int getArmor();
};

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
string Hero::getName()
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