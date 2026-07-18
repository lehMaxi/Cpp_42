#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>
#include <iomanip>

typedef std::string str;

class ClapTrap
{
    public:
        ClapTrap(str name);
        ClapTrap(ClapTrap const &src)
        ~ClapTrap();
        ClapTrap &operator=(ClapTrap const &other);

        void    attack(str const &target);
        void    takeDamage(uint32_t amount);
        void    beRepaired(uint32_t amount);

    private:
        str name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
};

#endif