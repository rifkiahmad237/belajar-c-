#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string kataku = "belajar";
    int pjg_kata = kataku.length();
    cout << "panjang string: " << pjg_kata << endl;
    string kataku_baru = kataku.insert(2, "@");
    cout << "Kata baru" << kataku_baru << endl;
    string kataku_baru2 = kataku.append("@gmail.com");
    string kataku_baru3 = kataku.erase(1, 4);
    cout << "Kata ku yang dihapus sebagian: " << kataku_baru3 << endl;
    if (kataku.empty())
    {
        cout << "Kataku kosong" << endl;
    }
    else
    {
        cout << "Kataku tidak kosong" << endl;
    }
    return 0;
}
