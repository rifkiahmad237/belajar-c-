#include <iostream>
using namespace std;

void print(int *, int baris, int kolom);
int main(int argc, char const *argv[])
{
    const int baris = 3;
    const int kolom = 3;

    int arrayMD[kolom][baris] = {1, 2, 3, 4, 5, 6};
    print(*arrayMD, baris, kolom);
    return 0;
}

void print(int *arrayPtr, int baris, int kolom)
{
    int index = 0;
    for (int i = 0; i < baris; i++)
    {
        cout << "[ ";
        for (int j = 0; j < kolom; j++)
        {
            cout << *(arrayPtr + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}