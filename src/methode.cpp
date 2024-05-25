#include <iostream>
using namespace std;

class Hero
{
public:
    string nama;
    double lp, damage;
    Hero(const char *inputNama, double inputLP, double inputDamage)
    {
        Hero::nama = inputNama;
        Hero::lp = inputLP;
        Hero::damage = inputDamage;
    }

    void tambahAtribut(double lpBaru, double damageBaru)
    {
        lp = lp + lpBaru;
        damage = damage + damageBaru;
    }

    double serang(double serangDamage)
    {
        lp = lp - (serangDamage / 10);
        return lp;
    }

    void diserang(const char *penyerang, double serangDamage)
    {
        cout << Hero::nama << " diserang " << penyerang << " dengan damage " << serangDamage << endl;
        lp = lp - (serangDamage / 10);
        cout << "Sisa lp " << Hero::nama << " : " << lp << endl;
    }
};

int main(int argc, char const *argv[])
{
    double sisaLp;
    Hero rimuru = Hero("rimuru", 70, 120);
    Hero otong = Hero("otong", 150, 200);
    cout << "Nama Hero: " << rimuru.nama << endl;
    cout << "LP Hero: " << rimuru.lp << endl;
    cout << "Damage Hero: " << rimuru.damage << endl;

    rimuru.tambahAtribut(20, 30);
    cout << "LP Baru: " << rimuru.lp << endl;
    cout << "Damage Baru: " << rimuru.damage << endl;

    // sisaLp = rimuru.diserang(200);
    // cout << "LP Pasca Serang: " << sisaLp << endl;
    rimuru.diserang("otong", 50);
    return 0;
}
