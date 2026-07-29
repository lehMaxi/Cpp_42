#include "ClapTrap.hpp"

ClapTrap::ClapTrap(str name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << this->name << " arrived at the scene!" << std::endl;
    std::cout << "Ready to take " << this->hitPoints << " points of damage and spend " << this->energyPoints << " points of energy" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
    std::cout << this->name << " gets copied!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " broke down and was destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{
    if (this != &other)
    {
        std::cout << other.name << " gets copied and reasigned!" << std::endl;
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

void    ClapTrap::attack(const str &target)
{
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        std::cout << this->name << " twitches but can't act." << std::endl;
        return;
    }
    std::cout << this->name << " initiates attack protocols against " << target << "." << std::endl;
    std::cout << this->attackDamage << " points of damage have been inflicted." << std::endl;
    this->energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints -= amount;
    std::cout << this->name << " takes " << amount << " points of damage";
    if (this->hitPoints <= 0)
    {
        std::cout << ", leaving it immobiliesed" << std::endl;
        this->hitPoints = 0;
    }
    else
        std::cout << ", leaving it with " << this->hitPoints << " hitpoints." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        std::cout << this->name << " twitches but can't act." << std::endl;
        return;
    }
    this->hitPoints += amount;
    std::cout << this->name << " repaires itself for " << amount << " hitpoints and is ready again." << std::endl;
    this->energyPoints--;
}