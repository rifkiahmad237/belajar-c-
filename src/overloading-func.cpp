#include <iostream>
using namespace std;

// fungsi utama
int luas_kotak(int panjang, int lebar);
// fungsi overloading 1
int luas_kotak(int sisi);
// fungsi overloading 2
double luas_kotak(double sisi);

int main(int argc, char const *argv[])
{
    cout << "Luas persegi : " << luas_kotak(2) << endl;
    cout << "Luas persegi panjang: " << luas_kotak(2, 3) << endl;
    cout << "Luas persegi 2: " << luas_kotak(3.5) << endl;
}

int luas_kotak(int panjang, int lebar)
{
    return panjang * lebar;
}

int luas_kotak(int sisi)
{
    return sisi * sisi;
}

double luas_kotak(double sisi)
{
    return sisi * sisi;
}