#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &src);
        ~Dog();

        Dog &   operator=(Dog const &template)

        void    makeSound() const;
    private:
        str _type;
};

#endif