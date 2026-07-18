#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const &src);
        Fixed(const int i);
        Fixed(const float f);
        ~Fixed();
        Fixed&  operator=(Fixed const &rSym);
        bool    operator==(Fixed const &rSym) const;
        bool    operator!=(Fixed const &rSym) const;
        bool    operator<=(Fixed const &rSym) const;
        bool    operator>=(Fixed const &rSym) const;
        bool    operator<(Fixed const &rSym) const;
        bool    operator>(Fixed const &rSym) const;
        Fixed   operator+(Fixed const &rSym) const;
        Fixed   operator-(Fixed const &rSym) const;
        Fixed   operator*(Fixed const &rSym) const;
        Fixed   operator/(Fixed const &rSym) const;
        Fixed&  operator++();
        Fixed   operator++(int);
        Fixed&  operator--();
        Fixed   operator--(int);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   fixToFloat() const;
        int     fixToInt() const;

        static Fixed &          min(Fixed &a, Fixed &b);
        static Fixed const &    min(Fixed const &a, Fixed const &b);
        static Fixed &          max(Fixed &a, Fixed &b);
        static Fixed const &    max(Fixed const &a, Fixed const &b);
    private:
        int              value;
        static const int bits = 8;
};

std::ostream&   operator<<(std::ostream& o, Fixed const &rSym);

#endif