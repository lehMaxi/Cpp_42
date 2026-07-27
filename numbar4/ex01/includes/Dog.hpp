#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &src);
        ~Dog();

        Dog &   operator=(Dog const &template)

        void    makeSound() const;
        const Brain& getBrain() const;
    private:
        Brain* _brain;
        str _type;
};

#endif