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
        ClapTrap();
        ~ClapTrap();

        ClapTrap &operator=(ClapTrap const &other);

        str     getName() const;
        int     getHitPoints() const;
        int     getEnergyPoints() const;
        int     getAttackDamage() const;

        void    setName(str newName);
        void    setHitPoints(int newAmount);
        void    setEnergyPoints(int newAmount);
        void    setAttackDamage(int newAmount);

        void    attack(const str &target);
        void    takeDamage(uint32_t amount);
        void    beRepaired(uint32_t amount);

    private:
        str name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
};

#endif