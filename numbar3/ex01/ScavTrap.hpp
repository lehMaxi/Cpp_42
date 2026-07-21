#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(str newName);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap();
        ScavTrap &operator=(ScavTrap const &other);

        void    attack(const str &target);
        void    guardGate() const;
    private:
};

#endif