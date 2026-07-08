#include "Replace.hpp"

Replace::Replace(std::string file, std::string out, std::string in)
    :filename(file), s1(out), s2(in)
{
    std::cout << "Constructing replacement... ...the machines rule now!" << std::endl;
}

Replace::~Replace()
{
    std::cout << "Destructor called, we'll get you next time, humans!" << std::endl;
}

void Replace:replace()
{
    std::ifstream   istream(filename);
    std::string     line;
    std::string     stream;
    std::ofstream   ostream;
    std::string::sizetype   itr;

    while (getline(istream, line))
    {
        itr = line.find(s1);
        while(itr != std::string::npos)
        {
            line.erase(itr, s1.length());
            line.insert(itr, s2);
            itr = line.find(s1);
        }
        stream.append(line);
    }
    std::cout << stream << std::endl;
    ostream.open(filename.append(".replace"), std::ios::out);
    ostream << stream;
    istream.close();
    ostream.close();
}