#include <iostream>
#include <stdint.h>

/* friend class akan memberikan semua atributnya (termasuk atribut private) kepada friend class yang
dituju, namun hanya bersifat searah. Dimana class sumber tidak dapat mengakses atribut dari kelas
tujuan
*/

class Hewan {
    friend class Buah;

  public:
    Hewan(const char *nama, uint16_t umur) {
        this->setNamaHewan(nama);
        this->setUmurHewan(umur);
    }
    const char *getNamaHewan() {
        return this->namaHewan;
    }
    uint16_t getUmurHewan() {
        return this->umurHewan;
    }

  private:
    const char *namaHewan;
    uint16_t umurHewan;
    void setNamaHewan(const char *nama) {
        this->namaHewan = nama;
    }
    void setUmurHewan(uint16_t umur) {
        this->umurHewan = umur;
    }
};

class Buah {
    friend class Hewan;

  public:
    Buah(const char *nama, uint16_t umur) {
        this->setNamaBuah(nama);
        this->setUmurBuah(umur);
    }

    bool lebihTuaMana(Hewan &obj) {
        if (this->umurBuah > obj.umurHewan) {
            return true;
        }
        return false;
    }

  private:
    const char *namaBuah;
    uint16_t umurBuah;
    void setNamaBuah(const char *name) {
        this->namaBuah = name;
    }
    void setUmurBuah(uint16_t age) {
        this->umurBuah = age;
    }
};
int main(int argc, char const *argv[]) {

    Buah *apel = new Buah("apel", 1);
    Hewan *sapi = new Hewan("sapi", 3);

    bool cekUmur = apel->lebihTuaMana(*sapi);
    std::cout << "apel lebih tua dari " << sapi->getNamaHewan() << ": " << cekUmur << std::endl;

    delete apel, sapi;
    return 0;
}
