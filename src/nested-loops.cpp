#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int height;
    cout << "Masukkan tinggi segitiga: ";
    cin >> height;
    // for (int i = 0; i <= height; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";

    //     /* code */
    // }
    for (int i = height; i > 0; i--)
    {
        for (int j = 1; j <= i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
