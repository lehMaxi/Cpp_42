#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>

class HumanB
{
    public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack(void) const;
    private:
    std::string name;
    Weapon &weapon;
};
#endif