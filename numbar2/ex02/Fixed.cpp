#include "Fixed.hpp"



Fixed::Fixed() : value(0)
{
   std::cout << "Constructing..." << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copying..." << std::endl;
    *this = src;
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

Fixed    Fixed::operator+(Fixed const &rSym) const
{
    return (this->toFloat() + rSym.toFloat());
}

Fixed    Fixed::operator-(Fixed const &rSym) const
{
    return (this->toFloat() - rSym.toFloat());
}

Fixed    Fixed::operator*(Fixed const &rSym) const
{
    return (this->toFloat() * rSym.toFloat());
}

Fixed    Fixed::operator/(Fixed const &rSym) const
{
    return (this->toFloat() / rSym.toFloat());
}

Fixed&  Fixed::operator++()
{
    this->value++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed   tmp(*this);
    operator++();
    return tmp;
}

Fixed&  Fixed::operator--()
{
    this->value--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp(*this);
    this->value--;
    return tmp;
}

bool    Fixed::operator==(Fixed const &rSym) const
{
    if (this->getRawBits() == rSym.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<=(Fixed const &rSym) const
{
    if (this->getRawBits() <= rSym.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>=(Fixed const &rSym) const
{
    if (this->getRawBits() >= rSym.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator!=(Fixed const &rSym) const
{
    if (this->getRawBits() != rSym.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<(Fixed const &rSym) const
{
    if (this->getRawBits() < rSym.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>(Fixed const &rSym) const
{
    if (this->getRawBits() > rSym.getRawBits())
        return true;
    return false;
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

float   Fixed::toFloat() const
{
    return (float)this->value / (float)(1 << bits);
}

int     Fixed::toInt() const
{
    return (int)this->value >> bits;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return a;
    return b;
}

std::ostream&   operator<<(std::ostream& o, Fixed const &rSym)
{
    o << rSym.toFloat();
    return o;
}