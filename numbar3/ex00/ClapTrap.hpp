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
    private:
};

#endif