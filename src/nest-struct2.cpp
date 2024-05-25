#include <iostream>
using namespace std;

struct penyanyi
{
    string nama;
    int umur;
};
struct lagu
{
    string judul;
    int album_ke;
    penyanyi artis;
};
int main(int argc, char const *argv[])
{
    penyanyi artis1;
    lagu lagu1;

    artis1.nama = "rifky";
    artis1.umur = 17;

    lagu1.judul = "satu";
    lagu1.album_ke = 1;
    lagu1.artis = artis1;

    cout << "Judul Lagu: " << lagu1.judul << endl;
    cout << "Album ke: " << lagu1.album_ke << endl;
    cout << "Nama penyanyi: " << lagu1.artis.nama << endl;
    cout << "Umur penyanyi: " << lagu1.artis.umur << endl;

    return 0;
}
