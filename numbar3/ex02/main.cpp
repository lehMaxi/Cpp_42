#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
    FragTrap frag("Fraggy");
    frag.attack("Scavy");
    scav.takeDamage(30);
    scav.attack("Fraggy");
    frag.takeDamage(20);
    scav.beRepaired(10);
    frag.attack("Scavy");
    frag.attack("Scavy");
    scav.takeDamage(60);
    scav.attack("Fraggy");
    frag.takeDamage(20);
    scav.beRepaired(10);
    frag.attack("Scavy");
    scav.takeDamage(30);
    frag.highFivesGuys();
    return 0;
}