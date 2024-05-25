#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa
{
public:
    int ID;
    string Nama;
    string NIM;
    string jurusan;

    Mahasiswa(int ID, const char *Nama, const char *NIM, const char *jurusan)
    {
        Mahasiswa::ID = ID;
        Mahasiswa::Nama = Nama;
        Mahasiswa::NIM = NIM;
        Mahasiswa::jurusan = jurusan;
    }

    string stringify()
    {
        if (Mahasiswa::ID == 1)
        {
            return to_string(ID) + " " + Nama + " " + NIM + " " + jurusan;
        }
        else
        {
            return "\n" + to_string(ID) + " " + Nama + " " + NIM + " " + jurusan;
        }
    }
};

class Dbase
{
public:
    ifstream in;
    ofstream out;
    const char *fileName;

    Dbase(const char *fileName)
    {
        Dbase::fileName = fileName;
    }
    void save(Mahasiswa data)
    {
        Dbase::out.open(Dbase::fileName, ios::app);
        Dbase::out << data.stringify();
        Dbase::out.close();
    }
    void showdata()
    {
        string ID, namaDBS, nimDBS, jurusanDBS;
        Dbase::in.open(Dbase::fileName, ios::in);
        int index = 1;
        while (!(Dbase::in.eof()))
        {
            Dbase::in >> ID;
            Dbase::in >> namaDBS;
            Dbase::in >> nimDBS;
            Dbase::in >> jurusanDBS;

            cout << index << " " << namaDBS << " " << nimDBS << " " << jurusanDBS << endl;
            index++;
        }
    }
};
int main(int argc, char const *argv[])
{
    int IDMhs = 0;
    string Nama = "";
    string NIM = "";
    string Jurusan = "";
    cout << "===MASUKAN DATA MAHASISWA===" << endl;
    cout << "ID Mhs: ";
    cin >> IDMhs;
    cout << "Nama Mhs: ";
    cin >> Nama;
    cout << "NIM Mhs: ";
    cin >> NIM;
    cout << "Jurusan Mhs: ";
    cin >> Jurusan;
    Dbase dbase1 = Dbase("../txt/dataMhs.txt");
    const char *namaChar = Nama.c_str();
    const char *nimChar = NIM.c_str();
    const char *jurusanChar = Jurusan.c_str();

    Mahasiswa mahasiswa1 = Mahasiswa(IDMhs, namaChar, nimChar, jurusanChar);
    // Mahasiswa mahasiswa2 = Mahasiswa(2, "Otong", "1234568", "Kimia");
    // Mahasiswa mahasiswa3 = Mahasiswa(3, "Ujang", "1234569", "Kimia");

    dbase1.save(mahasiswa1);
    // dbase1.save(mahasiswa2);
    // dbase1.save(mahasiswa3);
    dbase1.showdata();
    return 0;
}
