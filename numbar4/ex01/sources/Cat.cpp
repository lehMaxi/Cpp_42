#include "../includes/Cat.hpp"

Cat::Cat()
{
//    std::cout << "Look at the new cute kitty" << std::endl;
    _type = "Cat";
    _brain = new Brain();
    this->_brain->fillBrain("Maybe mewmew, or should I say meow?");
}

Cat::Cat(Cat const &src)
{
//    std::cout << "A freshly baked kitty" << std::endl;
    _type = src._type;
    _brain = new Brain(*src._brain);
}

Cat::~Cat()
{
//  std::cout << "And here I thought there should be 8 lives left..." << std::endl;
    delete _brain;
}

Cat& Cat::operator=(Cat const &src)
{
    if (this != &src)
    {
        std::cout << "Looks just like her mommy." << std::endl;
        this->setType(src._type);
        delete _brain;
        _brain = new Brain(*src._brain);
    }
    return *this;
}

void Cat::makeSound() const
{
std::cout << "I guess mewmewmew would be appropriate, yes?" << std::endl;
}

