#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
    public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    void setType(std::string type);
    const std::string& getType(void) const;
    private:
        std::string type;
};
#endif
