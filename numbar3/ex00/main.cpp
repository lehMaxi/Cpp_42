#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");

    clap.attack("Scavy");
    clap.takeDamage(5);
    clap.beRepaired(10);
    clap.takeDamage(20);
    clap.attack("Scavy");
    return 0;
}