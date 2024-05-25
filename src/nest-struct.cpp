#include <iostream>
#include <string>
using namespace std;

struct tokoh
{
    string nama;
    int jumlah_damage;
};

struct anime
{
    string judul;
    int episode;
    tokoh karakter;
};

int main(int argc, char const *argv[])
{

    anime anime1;
    tokoh tokoh1;
    anime1.judul = "jujutsu";
    anime1.episode = 23;
    tokoh1.nama = "gojo";
    tokoh1.jumlah_damage = 100;
    anime1.karakter = tokoh1;
    cout << anime1.judul << endl;
    cout << anime1.episode << endl;
    cout << anime1.karakter.nama << endl;
    cout << anime1.karakter.jumlah_damage << endl;
    return 0;
}
