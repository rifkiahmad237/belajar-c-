#include <iostream>
#include <stdio.h>
using namespace std;

void test()
{
    cout << "Hello bro, from test\n";
}
int main()
{
    int x, y, z, sum;
    char i = 'A';
    string belajar = "Belajar C++";
    x = 5;
    y = 6;
    cout << "Masukkan angka untuk var z: ";
    cin >> z;
    sum = x + y + z;
    cout << "Nilai x: " << x << endl;
    cout << "Nilai y: " << y << endl;
    cout << "Nilai sum: " << sum << endl;
    cout << "Karakter i: " << i << endl;
    cout << "String belajar: " << belajar << endl;
    test();
    return 0;
}