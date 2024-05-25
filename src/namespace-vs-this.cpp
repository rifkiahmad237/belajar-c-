#include <iostream>
using namespace std;

// class Mahasiswa
// {
// public:
//     const char *nama;
//     int NIM;
//     int IPK;
//     int Damage;

//     Mahasiswa(const char *nama, int NIM, int IPKin)
//     {
//         // dengan namespace
//         Mahasiswa::nama = nama;

//         // dengan this
//         this->NIM = NIM;

//         // konvesional
//         IPK = IPKin;

//         void setDamage(int);
//     }

//     // prototipe fungsi
//     void setDamage(int);
// };

// class dengan Namespace
namespace Data
{
    class Mahasiswa
    {
    public:
        const char *nama;
        int NIM;
        int IPK;
        int Damage;

        Mahasiswa(const char *nama, int NIM, int IPKin)
        {
            // dengan namespace
            Mahasiswa::nama = nama;

            // dengan this
            this->NIM = NIM;

            // konvesional
            IPK = IPKin;

            void setDamage(int);
        }

        // prototipe fungsi
        void setDamage(int);
    };
};

// void Mahasiswa::setDamage(int damage)
void Data::Mahasiswa::setDamage(int damage)
{
    this->Damage = damage;
}

int main(int argc, char const *argv[])
{

    // Mahasiswa *mhs1 = new Mahasiswa("Ucup", 123, 4);
    Data::Mahasiswa *mhs1 = new Data::Mahasiswa("Ucup", 123, 4);

    cout << mhs1->nama << endl;
    cout << mhs1->NIM << endl;
    cout << mhs1->IPK << endl;
    mhs1->setDamage(100);
    cout << mhs1->Damage << endl;
    return 0;
}
