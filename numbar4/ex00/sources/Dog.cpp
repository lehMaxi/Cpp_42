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
std::cout << "I wanted to put it down to the ground..." << std::endl;
}

Dog Dog:: operator=(Dog &template)
{
if (*this != template)
std::cout << "Looks just like its mother." << std::endl;
this->setType(template.getType());
return this;
}

void Dog::makeSound()
{
std::cout << "Dog: Raf raf raf, this shoo looks like an appropriate dinner, yes?" << std::endl;
}