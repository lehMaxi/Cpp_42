#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Replace
{
public:
    Replace(std::string filename, std::string s1, std::string s2);
    ~Replace();
    replace();
private:
    std::string filename;
    std::string s1;
    std::string s2;
};

#endif