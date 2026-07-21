#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(str newName);
        FragTrap(FragTrap const &src);
        ~FragTrap();
        FragTrap &operator=(FragTrap const &other);

        void    highFivesGuys(void) const;
    private:
};

#endif