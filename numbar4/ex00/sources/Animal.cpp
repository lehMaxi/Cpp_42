#include "Animals.hpp"

Animal::Animal(str newType) : _type(newType)
{
    std::cout << "Rejoice! A new animal is born! It's a " << newType << std::endl;
}

Animal::Animal() : _type("UNKNOWN")
{
    std::cout << "Rejoice! A new animal is born! It's a... ...an... ...oh... ...oh my..." << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "An animal got cloned." << std::endl;
    *this = src;
}

Animal::~Animal()
{
    std::cout << "An animal got deconstructed... ...smells like BBQ" << std::endl;
}

Animal& Animal::operator=(Animal const &template)
{
    if (this != &template)
    {
        std::cout << "A new animal got created after a template" << std::endl;
        this->setType(template.getType());
    }
    return *this;
}

void    Animal::setType(str newType)
{
    this->_type = newType;
}

str     Animal::getType()
{
    return this->_type;
}

void    makeSound() const
{
    std::cout << "Cronenbergian Abomination: ...slrrr..." << std::endl;
}