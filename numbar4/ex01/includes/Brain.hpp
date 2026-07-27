#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

typedef std::string str;

class Brain
{
    public:
        Brain();
        Brain(Brain const &src);
        ~Brain();

        Brain &   operator=(Brain const &src);
        str     getIdea(int index) const;
        void    fillBrain(str idea);
        void    setIdea(int index, str idea);

    private:
        str ideas[100];
};

#endif