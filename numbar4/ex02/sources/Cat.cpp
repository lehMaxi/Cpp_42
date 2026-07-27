#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Look at the new cute kitty" << std::endl;
    _type = "Cat";
}

Cat::Cat(Cat const &src)
{
std::cout << "A freshly baked kitty" << std::endl;
*this = src;
}

Cat::~Cat()
{
std::cout << "And here I thought there should be 8 lives left..." << std::endl;
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