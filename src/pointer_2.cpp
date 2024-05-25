#include <iostream>
using namespace std;

int func_pointer(int varNum)
{
    return varNum * varNum;
}

int main()
{
    int a = 5;
    int *aPtr = nullptr;
    aPtr = &a;
    int &b = a;

    cout << func_pointer(*aPtr) << endl;
    cout << b << endl;
}