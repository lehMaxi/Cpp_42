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
        virtual ~Animal();

        Animal &operator=(Animal const &src);

        void    setType(str newType);
        str     getType() const;

        virtual void    makeSound() const;
        Brain&   getBrain() const;
    protected:
        Brain *_brain;
        str _type;
};

#endif