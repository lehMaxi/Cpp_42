#include "ClapTrap.hpp"

ClapTrap::ClapTrap(str name) : name(name), hitPoints(10), energyPoints(10), attackDamage(10)
{
    std::cout << "The ClapTrap " << this->name << " arrived at the scene!" << std::endl;
    std::cout << "Ready to take" << this->hitPoints << "points of damage and spend " << this->energyPoints << "points of energy" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << src.name << "gets copied!" << std::endl;
    *this = src;
}

ClapTrap::ClapTrap()
{
    std::cout << "A new Clap Trap arose." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << "broke down and was destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{
    if (this != &other)
    {
        std::cout << other.name << "gets copied and reasigned!" << std::endl;
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

str     ClapTrap::getName() const
{
    return (this->name);
}

int     ClapTrap::getHitPoints() const
{
    return (this->hitPoints);
}

int     ClapTrap::getEnergyPoints() const
{
    return (this->energyPoints);
}

int     ClapTrap::getAttackDamage() const
{
    return (this->attackDamage);
}

void    ClapTrap::setName(str newName)
{
    this->name = newName;
}

void    ClapTrap::setHitPoints(int newAmount)
{
    this->hitPoints = newAmount;
}

void    ClapTrap::setEnergyPoints(int newAmount)
{
    this->energyPoints = newAmount;
}

void    ClapTrap::setAttackDamage(int newAmount)
{
    this->attackDamage = newAmount;
}

void    ClapTrap::attack(const str &target)
{
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        std::cout << this->name << "twitches but can't act." << std::endl;
        return;
    }
    std::cout << this->name << " initiates attack protocols against " << target << "." << std::endl;
    std::cout << this->attackDamage << " points of damage have been inflicted." << std::endl;
    this->energyPoints--;
}

void    ClapTrap::takeDamage(uint32_t amount)
{
    this->hitPoints -= amount;
    std::cout << this->name << " takes " << amount << " points of damage";
    if (this->hitPoints <= 0)
        std::cout << ", leaving it immobiliesed" << std::endl;
    else
        std::cout << ", leaving it with " << this->hitPoints << " hitpoints." << std::endl;
}

void    ClapTrap::beRepaired(uint32_t amount)
{
    if (this->energyPoints <= 0)
    {
        std::cout << this->name << "twitches but can't act." << std::endl;
        return;
    }
    this->hitPoints += amount;
    std::cout << this->name << " repaires itself for " << amount << " hitpoints and is ready again." << std::endl;
    this->energyPoints--;
}