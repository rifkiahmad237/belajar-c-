#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    int age;
    cout << "Siapa namamu?: ";
    getline(cin >> ws, name); // mengabaikan spasi dari inputan pengguna
    cout << "Berapa usiamu?: ";
    cin >> age;
    cout << "Halo " << name << endl;
    cout << "Kamu berusia " << age << " tahun\n";
    return 0;
}
