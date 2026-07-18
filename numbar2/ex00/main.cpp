#include "Fixed.hpp"

int main(void)
{
    Fixed   base;
    Fixed   copy(base);
    Fixed   reassignment;

    reassignment = copy;

    std::cout << base.getRawBits() << std:endl;
    std::cout << copy.getRawBits() << std:endl;
    std::cout << reassignment.getRawBits() << std:endl;

    return 0;
}