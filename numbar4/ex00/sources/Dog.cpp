#include "..\includes\Dog.hpp"

Dog::Dog()
{
    std::cout << "Look at the new cute puppy" << std::endl;
    _type = "Dog";
}

Dog::Dog(Dog const &src)
{
std::cout << "A freshly baked puppy" << std::endl;
    _type = src._type;
}

Dog::~Dog()
{
std::cout << "I wanted to put it down to the ground..." << std::endl;
}

Dog& Dog::operator=(Dog const &src)
{
    if (this != &src)
    {
        std::cout << "Looks just like its mother." << std::endl;
        this->setType(src._type);
    }
    return *this;
}

void Dog::makeSound() const
{
std::cout << "Arf arf arf, this shoo looks like an appropriate dinner, yes?" << std::endl;
}