#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Look at the new cute puppy" << std::endl;
    _type = "Dog";
}

Dog::Dog(Dog const &src)
{
std::cout << "A freshly baked puppy" << std::endl;
*this = src;
}

Dog::~Dog()
{
std::cout << "Did.." << std::endl;
}

Cat Cat:: operator=(Cat &template)
{
if (*this != template)
std::cout << "Looks just like her mommy." << std::endl;
this->setType(template.getType());
return this;
}

void Cat::makeSound()
{
std::cout << "Cat: I guess mewmewmew would be appropriate, yes?" << std::endl;
}