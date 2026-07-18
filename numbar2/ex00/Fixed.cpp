#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Constructing..." << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copying..." << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "I'm become death..." << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rSym)
{
    std::cout << "Complying to reassignment..." << std::endl;
    this->value = rSym.getRawBits();
    return *this;
}

int     Fixed::getRawBits() const
{
    std::cout << "Bits... ...we like them raw here" << std::endl;
    return this->value;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "The bits are set" << std::endl;
    this->value = raw;
}