#include <iostream>
using namespace std;

void ref_func(int &);
int kuadrat(int &);
int main(int argc, char const *argv[])
{
    int a;
    cout << "Masukan angka untuk dikuadratkan : ";
    cin >> a;
    cout << "Nilai a: " << a << endl;
    cout << "Alamat a:" << &a << endl;

    ref_func(a);
    cout << "Hasil kuadrat dari " << a << " : " << kuadrat(a) << endl;

    return 0;
}

void ref_func(int &b)
{
    cout << "Nilai b: " << b << endl;
    cout << "Alamat b: " << &b << endl;
}

int kuadrat(int &b)
{
    return b * b;
}