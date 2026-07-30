#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &src);
        ~Cat();

        Cat &   operator=(Cat const &src);

        void    makeSound() const;
        
};

#endif