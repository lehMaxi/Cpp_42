#include "Zombie.hpp"

int main()
{
    int n = 10;
    Zombie *horde = zombieHorde(n, std:string("creepy_crawly"));
    if (horde == NULL)
        return(EXIT_FAILURE);
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete[] horde;
    return (EXIT_SUCCESS);
}