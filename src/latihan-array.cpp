#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    array<int, 10> nilai;
    cout << "---Program Menampilkan Grafik Nilai---" << endl;
    for (int i = 0; i <= nilai.size(); i++)
    {
        if (i == 0)
        {
            cout << "Masukan jumlah nilai 0-9  :";
        }
        else if (i < nilai.size())
            cout << "Masukan jumlah nilai " << i * 10 << "-" << i * 10 + 9 << ": ";
        else if (i == nilai.size())
        {
            cout << "Masukan jumlah nilai 100: ";
        }
        cin >> nilai[i];
    }
    for (int i = 0; i <= nilai.size(); i++)
    {
        if (i == 0)
        {
            cout << "0-9  : ";
        }
        else if (i < nilai.size())
            cout << i * 10 << "-" << i * 10 + 9 << ": ";
        else if (i == nilai.size())
        {
            cout << "100  :";
        }
        for (int bintang = 0; bintang < nilai[i]; bintang++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
