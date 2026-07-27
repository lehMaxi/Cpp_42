#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

typedef std::string str;

class Animal
{
    public:
        Animal(str newType);
        Animal();
        Animal(Animal const &src);
        ~Animal();

        Animal &operator=(Animal const &template);

        void    setType(str newType);
        str     getType();

        virtual void    makeSound() const;
    protected:
        str _type;
};

#endif