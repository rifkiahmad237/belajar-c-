#include <iostream>
using namespace std;

int main()
{
    int kolom, baris;
    cout << "Masukkan baris array: ";
    cin >> baris;

    cout << "Masukkan kolom array: ";
    cin >> kolom;

    int array1[kolom][baris];

    cin.get();
    return 0;
}

void printArray(int *array, int kolom, int baris)
{
    int index_kolom = 0;
    int index_baris = 0;
    int nilai_kolom, nilai_baris;

    for (index_kolom; index_kolom < kolom; index_kolom++)
    {
        cout << "Masukkan nilai kolom " << index_kolom;
        cin >> nilai_kolom;
        array[index_kolom][index_baris] = nilai_kolom;
        for (int j = 0; j < baris; j++)
        {
            cout << "Masukkan nilai baris " << j;
            cin >> nilai_baris;
            array[index_kolom][index_baris] = nilai_baris;
        };
    }
}