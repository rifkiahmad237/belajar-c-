#include <iostream>
using namespace std;

/* typdef dan using digunakan sebagai pembuat nama alias
untuk memudahkan mengingat tipe data yang panjang*/
typedef string my_string;
using angka = int;

int main(int argc, char const *argv[])
{
    my_string nama = "Rifky!";
    angka nomor = 1;
    cout << nama << endl;
    cout << nomor;
    return 0;
}
