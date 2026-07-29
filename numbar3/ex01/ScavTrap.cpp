#include "ScavTrap.hpp"

ScavTrap::ScavTrap(str newName) : ClapTrap()
{
    this->setName(newName);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "*DATA CORUPTS* " << this->getName() << " becomes a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    std::cout << src.getName() << " gets copied as a ScavTrap." << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap" << this->getName() << " finally got vindicated." <<std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
    if (this != &other)
    {
        std::cout << other.getName() << " gets recreated as ScavTrap!" << std::endl;
        this->setName(other.getName());
        this->setHitPoints(other.getHitPoints());
        this->setEnergyPoints(other.getEnergyPoints());
        this->setAttackDamage(other.getAttackDamage());
    }
    return *this;
}

void    ScavTrap::attack(const str &target)
{
    if (this->getHitPoints() <= 0 || this->getEnergyPoints() <= 0)
    {
        std::cout << "The ScavTrap " << this->getName() << " twitches but can't act." << std::endl;
        return;
    }
    std::cout << "The ScavTrap " << this->getName() << " violently pummels " << target << " vicioulsy inflicting ";
    std::cout << this->getAttackDamage() << " points of damage." << std::endl;
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void    ScavTrap::guardGate() const
{
    std::cout << "The ScavTrap " << this->getName() << " now is guarding the gate!" << std::endl;
}