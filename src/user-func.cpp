#include <iostream>
using namespace std;
void data_diri(string nama, int umur);
int main(int argc, char const *argv[])
{
    string nama;
    int umur;
    cout << "Halo, siapa namamu?:";
    cin >> nama;
    cout << "Berapa usiamu?: ";
    cin >> umur;
    data_diri(nama, umur);
    return 0;
}

void data_diri(string nama, int umur)
{
    cout << "Halo " << nama << endl;
    cout << "Anda berusia " << umur << endl;
}
