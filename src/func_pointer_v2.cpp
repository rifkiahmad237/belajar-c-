#include <iostream>
using namespace std;

int kurang(int *, int *);
int valPtr = 0;
int *PtrVal = &valPtr;
int main()
{
    int a = 10;
    int b = 5;
    // int *aPtr1 = &a;
    // int *aPtr2 = &b;

    cout << "Nilai a kurang b: " << kurang(&a, &b) << endl;
    cout << "Alamat valPtr: " << &valPtr << endl;
    cout << "Alamat PtrVal: " << PtrVal << endl;
    return 0;
}

int kurang(int *valPtr1, int *valPtr2)
{
    *PtrVal = (*valPtr1) - (*valPtr2);
    return *PtrVal;
}
