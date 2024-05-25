#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int *aPtr = nullptr;
    aPtr = &a;
    cout << "Nilai dari a: " << a << endl;
    cout << "Alamat dari a: " << aPtr << endl;
    cout << "Mengambil nilai a dari pointer: " << *aPtr << endl;
    cin.get();
    return 0;
}
