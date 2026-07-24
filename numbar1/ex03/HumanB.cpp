#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    std::cout << this->name << " arrived unarmed, a sign of peace?"<< std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->name << " has been felled in epic battle." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
    std::cout << this->weapon->getType() << " appeared in " << this->name << "'s hands!" << std::endl;
}

void HumanB::attack(void) const
{
    if (this->weapon->getType().empty())
        std::cout << this->name << " reaches out with their bare hands!" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << " pushing unneccessary violence!" << std::endl;
}
