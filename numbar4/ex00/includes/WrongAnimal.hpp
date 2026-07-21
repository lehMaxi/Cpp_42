#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

typedef std::string str;

class WrongAnimal
{
    public:
        WrongAnimal(str newType);
        WrongAnimal();
        WrongAnimal(WrongAnimal const &src);
        ~WrongAnimal();

        WrongAnimal &operator=(WrongAnimal const &template);

        void    setType(str newType);
        str     getType();

        void    makeSound() const;
    protected:
        str _type;
};

#endif