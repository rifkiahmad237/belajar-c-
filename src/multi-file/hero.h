#include <string>
class Hero
{
public:
    std::string name;
    int damage;
    int armor;

    Hero(const char *name, int damage, int armor);
    void setName(const char *);
    void setDamage(int);
    void setArmor(int);

    std::string getName();
    int getDamage();
    int getArmor();
};