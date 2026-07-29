#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include "Brain.hpp"

typedef std::string str;

class Animal
{
    public:
        Animal(str newType);
        Animal();
        Animal(Animal const &src);
        ~Animal();

        Animal &operator=(Animal const &src);

        void    setType(str newType);
        str     getType();
        const Brain& getBrain() const;

        virtual void    makeSound() const = 0;
    protected:
        str _type;
        Brain _brain;
};

#endif