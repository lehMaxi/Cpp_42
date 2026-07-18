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
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   fixToFloat() const;
        int     fixToInt() const;
    private:
        int              value;
        static const int bits = 8;
};

std::ostream&   operator<<(std::ostream& o, Fixed const &rSym);

#endif