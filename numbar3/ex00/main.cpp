#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");
    clap.attack("a random target");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.takeDamage(10);
    clap.attack("another random target");
    return 0;
}