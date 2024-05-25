#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 7;
    cout << "Nilai a: " << a << endl;
    cout << "Alamat a: " << &a << endl;

    int &b = a;
    cout << "\nNIlai b: " << b << endl;
    cout << "Alamat b: " << &b << endl;

    a = 10;
    cout << "\nNIlai b: " << b << endl;
    cout << "Alamat b: " << &b << endl;

    return 0;
}
