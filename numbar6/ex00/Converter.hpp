#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cstdlib>

class Converter
{
    public:
        static void convert(const std::string &input);

    private:
        Converter();
        Converter(const Converter &other);
        ~Converter();

        Converter &operator=(const Converter &other);
};

#endif