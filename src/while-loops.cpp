#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string passw = "halo";
    string user_passw;
    while (true)
    {
        cout << "Masukan password untuk masuk: ";
        cin >> user_passw;
        while (user_passw == passw)
        {
            cout << "Berhasil masuk\n";
            goto masuk;
        }
        cout << "Ulangi lagi masukan password\n";
    }
masuk:
    cout << "Selamat datang\n";
    return 0;
}
