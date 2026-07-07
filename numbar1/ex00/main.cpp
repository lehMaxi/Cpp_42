#include "Zombie.hpp"

int main()
{
    Zombie *onHeap = newZombie(std::string("Igor"));

    onHeap->announce();
    randomChump(std::string("Ralf"));
    delete onHeap;
    return 0;
}