#include <iostream>
using namespace std;

void pointer_func(int *b)
{
    cout << "Nilai dari b: " << b << endl;
    cout << "Alamt dari b: " << &b << endl;
}

void kuadrat(int *b, float *hasil)
{
    *hasil = (*b) * (*b);
    cout << "Hasil Kuadrat: " << *hasil << endl;
}
int main(int argc, char const *argv[])
{
    int a = 5;
    float hasil;
    cout << "Nilai dari a: " << a << endl;
    cout << "Alamt dari a: " << &a << endl
         << endl;

    pointer_func(&a);
    kuadrat(&a, &hasil);
    cout << "Hasil: " << hasil << endl;
    // kuadrat(&a);
    return 0;
}
