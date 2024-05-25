#include <iostream>
using namespace std;

class Hero
{
public:
    string nama;
    double lp, damage;

    Hero(string inputNama, double inputLP, double inputDamage)
    {
        Hero::nama = inputNama;
        Hero::lp = inputLP;
        Hero::damage = inputDamage;

        cout << "Nama hero: " << Hero::nama << endl;
        cout << "LP hero: " << Hero::lp << endl;
        cout << "Damage hero: " << Hero::damage << endl;
    }
};
int main(int argc, char const *argv[])
{
    // Hero rimuru;
    // rimuru.nama = "rimuru";
    // rimuru.lp = 100;
    // rimuru.damage = 78.5;

    // cout << "Nama hero: " << rimuru.nama << endl;
    // cout << "LP hero: " << rimuru.lp << endl;
    // cout << "Damage hero: " << rimuru.damage << endl;
    Hero rimuru = Hero("rimuru", 100, 78.5);
    return 0;
}
