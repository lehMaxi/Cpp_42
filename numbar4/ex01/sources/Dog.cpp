#include "../includes/Dog.hpp"

Dog::Dog()
{
    std::cout << "Look at the new cute puppy" << std::endl;
    _type = "Dog";
    _brain = new Brain();
    _brain->fillBrain("Maybe bark, or should I say arf?");
}

Dog::Dog(Dog const &src)
{
    std::cout << "A freshly baked puppy" << std::endl;
    _type = src._type;
    _brain = new Brain(*src._brain);
}

Dog::~Dog()
{
std::cout << "I wanted to put it down to the ground..." << std::endl;
    delete _brain;
}

Dog& Dog::operator=(Dog const &src)
{
    if (this != &src)
    {
        std::cout << "Looks just like its mother." << std::endl;
        this->setType(src._type);
        delete _brain;
        _brain = new Brain(*src._brain);
    }
    return *this;
}

void Dog::makeSound() const
{
std::cout << "Arf arf arf, this shoo looks like an appropriate dinner, yes?" << std::endl;
}

const Brain& Dog::getBrain() const
{
    return *this->_brain;
}