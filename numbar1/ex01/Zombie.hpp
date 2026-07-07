#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void    announce (void);
        Zombie* newZombie (std::string name);
        void randomChump (std::string name);

    private:
        std::string name;
};