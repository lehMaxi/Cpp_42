#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string)
{
    if (n <= 0)
        return NULL;
    Zombie *Horde = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        std::string newName = name + "_" + std::to_string(i +1);
        Horde[i] = Zombie(newName);
    }
    return Horde;
}