#include "Fixed.hpp"



Fixed::Fixed()
{
    std::cout << "Constructing..." << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copying..." << std::endl;
}

Fixed::Fixed(const int i)
{
    std::cout << "Constructing... ...Integer..." << std::endl;
    this->value = i << bits;
}

Fixed::Fixed(const float f)
{
    std::cout << "Constructing... ...Floating..." << std::endl;
    this->value = roundf(f * (1 << bits));
}

Fixed::~Fixed()
{
    std::cout << "I'm become death..." << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rSym)
{
    std::cout << "Complying to reassignment..." << std::endl;
    if (this != &rSym)
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

float   Fixed::fixToFloat() const
{
    return (float)this->value / (float)(1 << bits);
}

int     Fixed::fixToInt() const
{
    return (int)this->value >> bits;
}

std::ostream&   operator<<(std::ostream& o, Fixed const &rSym)
{
    o << rSym.fixToFloat();
    return o;
}