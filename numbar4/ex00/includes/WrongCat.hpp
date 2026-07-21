#ifndef CAT_H
#define CAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const &src);
        ~WrongCat();

        WrongCat &   operator=(WrongCat const &template)

        void    makeSound() const;
    private:
        str _type;
};

#endif