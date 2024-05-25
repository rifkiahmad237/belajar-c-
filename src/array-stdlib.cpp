#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    // mendifinisikan array
    array<int, 5> nilai;
    for (int i = 0; i <= 4; i++)
    {
        nilai[i] = i;
        cout << "Array ke " << i << " adalah: " << nilai[i] << endl;
    }
    cout << "Array ke 3 adalah: " << nilai.at(3) << endl;
    cout << "Alamat array ke 3 adalah: " << &nilai.at(3) << endl;
    cout << "Alamt awal array: " << nilai.begin() << endl;
    cout << "Batas akhir array: " << nilai.end() << endl;
    cout << "Ukuran array: " << nilai.size() << endl;
    return 0;
}
