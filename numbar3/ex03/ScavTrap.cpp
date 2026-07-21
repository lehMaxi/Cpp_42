#include "ScavTrap.hpp"

ScavTrap::ScavTrap(str newName) : ClapTrap()
{
    this->setName(newName);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "*DATA CORUPTS* " << this->name << " becomes a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    std:cout << src.getName << " gets copied as a ScavTrap." << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap" << src.getName << " finally got vindicated." <<std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
    if (this != &other)
    {
        std::cout << other.name << " gets recreated as ScavTrap!" << std::endl;
        this->setName(other.getName);
        this->setHitPoints(other.getHitPoints);
        this->setEnergyPoints(other.getEnergyPoints);
        this->setAttackDamage(other.getAttackDamage);
    }
    return *this;
}

void    ScavTrap::attack(const str &target)
{
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        std::cout << "The ScavTrap " << this->name << " twitches but can't act." << std::endl;
        return;
    }
    std::cout << "The ScavTrap " << this->name << " violently pummels " << target << " vicioulsy inflicting";
    std::cout << this->attackDamage << " points of damage." << std::endl;
    this->energyPoints--;
}

void    ScavTrap::guardGate() const
{
    std::cout << "The ScavTrap " << this->name << " now is guarding the gate!" << std::endl;
}