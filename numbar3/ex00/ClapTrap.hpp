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
        ClapTrap(ClapTrap const &src);
        ~ClapTrap();
        ClapTrap &operator=(ClapTrap const &other);

        void    attack(const str &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    private:
        str name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
};

#endif