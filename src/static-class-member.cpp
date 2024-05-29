#include <iostream>
#include <stdint.h>

/*
1. member class static baik variabel maupun methode merupakan atribut yang melekat pada class dan
bukan pada instance objek

2. methode static hanya dapat mengakses variabel atau fungsi statis pada class
*/

class Hero {
  public:
    Hero(const char *name, uint16_t age) {
        this->name = name;
        this->age = age;
        std::cout << "Hero name: " << this->name << std::endl;
        std::cout << "Hero age: " << this->age << std::endl;
        std::cout << Hero::getObjCount() << std ::endl << std::endl;
        objCount++;
    }

    static int getObjCount() {
        // std::cout << "Hero name: " << name << std::endl;
        // std::cout << "Hero age: " << this->age << std::endl;
        return objCount;
    }

    ~Hero() {
        std::cout << this->name << " object destroyed" << std::endl;
        objCount--;
    }

  private:
    static int objCount;

    const char *name;
    uint16_t age;
};

int Hero::objCount = 0;

int main(int argc, char const *argv[]) {

    Hero *rimuru = new Hero("rimuru", 2);
    std::cout << "Jumlah obj Hero: " << Hero::getObjCount() << std::endl;

    Hero *ucup = new Hero("ucup", 3);
    std::cout << "Jumlah obj Hero: " << Hero::getObjCount() << std::endl;

    delete rimuru;

    Hero *denis = new Hero("denis", 3);
    std::cout << "Jumlah obj Hero: " << Hero::getObjCount() << std::endl;

    return 0;
}
