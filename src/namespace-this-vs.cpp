#include <iostream>
#include <stdint.h>

// 1. class di luar namespace
class Hero
{
public:
    Hero(const char *namaHero, uint16_t damageHero)
    {
        // namespace
        Hero::_nama = namaHero;

        // this
        this->_damage = damageHero;
    }

    uint16_t getDamage(const char *nameHero)
    {
        if (nameHero == this->_nama)
        {
            return this->_damage;
        }
        else
        {
            std::cout << "Nama " << nameHero << " tidak valid dengan hero manapun" << std::endl;
        }
        return 0;
    }

    const char *getName()
    {
        return this->_nama;
    }
    ~Hero()
    {
        std::cout << "Semua objek hero telah dihapus" << std::endl;
    }

private:
    const char *_nama;
    uint16_t _damage;
};

// 2. class di dalam namespace
namespace first
{
    class Player
    {
    public:
        Player(const char *name, uint16_t age)
        {
            this->set(name, age);
        }

        const char *getName()
        {
            return this->player_name;
        }

        uint16_t getAge()
        {
            return this->age;
        }

        ~Player()
        {
            std::cout << "Semua objek player telah dihapus" << std::endl;
        }

    private:
        const char *player_name;
        uint16_t age;
        void set(const char *name, uint16_t age)
        {
            this->player_name = name;
            this->age = age;
        }
    };
};

namespace second
{
    void helloWorld()
    {
        std::cout << "Hello World" << std::endl;
    }
}
int main(int argc, char const *argv[])
{
    second::helloWorld();

    Hero *rimuru = new Hero("Rimuru", 100);
    const char *nama = rimuru->getName();
    std::cout << "Nama Hero: " << nama << std::endl;
    uint16_t damageHero = rimuru->getDamage("Rimuru");
    std::cout << "Damage Hero: " << damageHero << std::endl;

    delete rimuru;

    first::Player *player_baru = new first::Player("Ucup", 17);
    std::cout << "Nama Player: " << player_baru->getName() << std::endl;
    uint16_t umur_player = player_baru->getAge();
    std::cout << "Umur Player: " << umur_player << std::endl;

    delete player_baru;
    return 0;
}
