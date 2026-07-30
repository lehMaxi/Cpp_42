#include "../includes/WrongCat.hpp"

WrongCat:: WrongCat()
{
    std::cout << "Panic! The creature broke lose! It's a cat?" << std::endl;
    _type = "WrongCat";
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

WrongCat& WrongCat::operator=(WrongCat const &src)
{
    if (this != &src)
    {
        std::cout << "There... ...are MORE of these cats?!" << std::endl;
        this->setType(src._type);
    }
    return *this;
}
