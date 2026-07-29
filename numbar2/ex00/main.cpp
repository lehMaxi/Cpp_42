#include "Fixed.hpp"

int main(void)
{
    Fixed   base;
    Fixed   cpy(base);
    Fixed   reassignment;

    reassignment = cpy;

    std::cout << base.getRawBits() << std::endl;
    std::cout << cpy.getRawBits() << std::endl;
    std::cout << reassignment.getRawBits() << std::endl;

    return 0;
}