#include <iostream>
using namespace std;

double pangkatIterasi(double a, double b)
{
    double hasil = 1;
    for (int i = 0; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
}

double pangkatRekursif(double a, double b)
{
    if (b <= 1)
    {
        return a;
    }
    else
    {
        return a * pangkatRekursif(a, (b - 1));
    }
}
int main(int argc, char const *argv[])
{
    cout << "Pangkat iterasi: " << pangkatIterasi(9, 3) << endl;
    cout << "Pangkat rekursif: " << pangkatRekursif(9, 3) << endl;
    return 0;
}
