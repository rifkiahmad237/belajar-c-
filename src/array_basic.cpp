#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double nilai[5] = {0, 1, 2, 3, 4};
    double iterasi = sizeof(nilai) / sizeof(double);
    for (int i = 0; i < iterasi; i++)
    {
        cout << "Nilai array ke " << i << " adalah " << nilai[i] << endl;
    }
    return 0;
}
