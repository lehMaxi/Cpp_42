#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");
    clap.attack("Scavy");
    scav.takeDamage(0);
    scav.attack("Clappy");
    clap.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
    clap.attack("Scavy");
    return 0;
}