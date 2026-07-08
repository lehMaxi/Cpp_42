#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harllo, I am a very polite program" << std::endl;
}

Harl::~Harl()
{
    std::cout << "*SLAMS DOOR AND SELFDESTRUCTS*" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "DEBUG: " << "If you could input all your financial data below please, I promise nothing bad will happen to it." << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO: " << "Harl is a very trustworthy program, very save, no security leaks... ...Name: Maxi Lehmann... ...possible. You can... ...Password: 1234abcdwhyhasittobesolong... ...trust Harl :)" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNING: " << "Not trusting me that much? If you could at least enter your name please?" << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR: " << "Well then, keep your secrets, I never wanted them anyways *MECHANICAL SOBBING*" << std::endl;
}
void Harl::complain(std:string level)
{
    std::string possibleLevel[] = {std::string("debug"), std::string("info"), std::string("warning"), std::string("error")};
    CALL_MEMBER_FUNC actions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i; i < 4; ++i)
        if(level == possibleLevel[i])
            (this->*actions[i]())
}