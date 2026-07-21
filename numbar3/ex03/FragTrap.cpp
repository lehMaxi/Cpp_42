#include "FragTrap.hpp"

FragTrap::FragTrap(str newName) : ClapTrap()
{
    this->setName(newName);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "*Apotheosis* " << this->name << " becomes a mighty FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
    std:cout << src.getName << " gets reformed as a mighty FragTrap." << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "The FragTrap " << src.getName << " drops down unable toget up again. Is all hope lost?" <<std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &other)
{
    if (this != &other)
    {
        std::cout << other.name << " gets recreated as a mighty FragTrap!" << std::endl;
        this->setName(other.getName);
        this->setHitPoints(other.getHitPoints);
        this->setEnergyPoints(other.getEnergyPoints);
        this->setAttackDamage(other.getAttackDamage);
    }
    return *this;
}

void    FragTrap::highFivesGuys(void) const
{
    std::cout << this->name << " raises their hands: 'Someone in need of a highfive?'" << std::endl;
}