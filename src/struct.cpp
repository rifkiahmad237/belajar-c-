#include <iostream>
using namespace std;

struct hewan
{
    string warna;
    string jenis;
    float berat;
};

int main(int argc, char const *argv[])
{
    hewan sapi;
    sapi.warna = "putih";
    sapi.jenis = "mamalia";
    sapi.berat = 20.4;

    cout << "Berat sapi: " << sapi.berat << endl;
    return 0;
}
