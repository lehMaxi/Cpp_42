#include "ClapTrap.hpp"

ClapTrap::ClapTrap(str name) : name(name), hitPoints(10), energyPoints(10), attackDamage(10)
{
    std::cout << this->name << "arrived at the scene!" << endl;
    std::cout << "Ready to take" << this->hitPoints << "points of damage and spend " << this->energyPoints << "points of energy" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << "broke down and was destroyed";
}