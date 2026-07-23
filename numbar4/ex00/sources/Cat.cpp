#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Look at the new cute kitty" << std::endl;
    _type = "Cat";
}

Cat::~Cat()
{
std::cout << "And here I thought there should be 8 lives left..." << std::endl;
}