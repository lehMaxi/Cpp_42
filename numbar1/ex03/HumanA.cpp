#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    std::cout << this->name << " has entered the fray with their " << this->weapon.getType() << "drawn and ready!"<< std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->name << " has been felled in epic battle." << std::endl;
}

void HumanA::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << "commiting unneccessary violence!" << std::endl;
}
