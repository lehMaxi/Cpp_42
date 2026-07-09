#ifndef HARL_H
#define HARL_H

#include <iostream>

enum Levels
{
    DEBUG = 0,
    INFO,
    WARNING,
    ERROR
};

class Harl
{
    public:
        Harl();
        ~Harl();
        int     getLevel(std:string level);
        void    complain(std:string level);

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif