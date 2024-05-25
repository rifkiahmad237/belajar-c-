#include <iostream>
using namespace std;
int umur;
int pilihan;
string nama;

void pilih_umur()
{
    cout << "Berapa usiamu?: ";
    cin >> umur;
    if (umur <= 0)
    {
        cout << "Anda belum dilahirkan\n";
    }
    else if (umur > 0 && umur < 5)
    {
        cout << "Anda termasuk balita\n";
    }
    else if (umur > 5 && umur < 10)
    {
        cout << "Anda termasuk remaja\n";
    }
    else
    {
        cout << "Anda termasuk dewasa\n";
    }
}
void pilih_nama()
{
    cout << "Siapa namamu?: ";
    cin >> nama;
    cout << "Namamu adalah: " << nama << endl;
}
int main(int argc, char const *argv[])
{
    cout << "Masukan pilihanmu (1 atau 2): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        pilih_umur();
        break;
    case 2:
        pilih_nama();
        break;
    default:
        cout << "Tolong hanya masukan angka 1 dan 2\n";
        break;
    }

    return 0;
}
