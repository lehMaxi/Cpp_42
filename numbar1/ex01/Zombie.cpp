#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "...something stirs beneath the ground..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " stumbled, fell and got destroyed 'humanely'." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}