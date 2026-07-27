#include "WrongCat.hpp"

WrongCat:: WrongCat() : _type("Cat")
{
    std::cout << "Panic! The creature broke lose! It's a cat?" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout << "This isn't the first cat of its kind?!" << std::endl;
    *this = src;
}

WrongCat::~WrongCat()
{
    std::cout << "Rejoice, the catlike creature is finally gone!" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &template)
{
    if (this != &template)
    {
        std::cout << "There... ...are MORE of these cats?!" << std::endl;
        this->setType(template.getType());
    }
    return *this;
}
