#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(str newType) : _type(newType)
{
    std::cout << "Rejoice? What have we brought onto this cused world? It's a " << newType << std::endl;
}

WrongAnimal:: WrongAnimal() : _type("UNKNOWN")
{
    std::cout << "Panic! The creature broke lose! It's a... ...an... ...oh... ...oh my... ...RUN!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "This isn't the first of its kind?!" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Rejoice, the creature is finally gone!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &src)
{
    if (this != &src)
    {
        std::cout << "There... ...are MORE of these?!" << std::endl;
        this->setType(src._type);
    }
    return *this;
}

void    WrongAnimal::setType(str newType)
{
    this->_type = newType;
}

str     WrongAnimal::getType()
{
    return this->_type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Absolute Monstrosity: ...slrrr... ...Raurgh!!!" << std::endl;
}
