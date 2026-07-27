#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &src);
        ~Cat();

        Cat &   operator=(Cat const &template)

        void    makeSound() const;
        const Brain& getBrain() const;
    private:
        Brain* _brain;
        str _type;
};

#endif