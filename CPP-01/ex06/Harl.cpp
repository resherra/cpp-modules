#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
    a[0] = &Harl::debug;
    a[1] = &Harl::info;
    a[2] = &Harl::warning;
    a[3] = &Harl::error;
}

void print(std::string complain)
{
    std::cout << complain << std::endl;
}

void    Harl::debug(void)
{   
    print("I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!");
}
void    Harl::info(void)
{
    print("I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
}
void    Harl::warning(void)
{
    print("I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.");
}
void    Harl::error(void)
{
    print("This is unacceptable! I want to speak to the manager now.");
}

int checkState(std::string state)
{
    if (state == "DEBUG")
        return 0;
    if (state == "INFO")
        return 1;
    if (state == "WARNING")
        return 2;
    if (state == "ERROR")
        return 3;
    return -1;
}

void    Harl::extra(int index)
{
    std::string comp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (index < 4)
    {
        std::cout << "[ " + comp[index] + " ]" << std::endl;
        (this->*a[index])();
        index++;
    }
}

void    Harl::complain(std::string state)
{
    int check = checkState(state);
    switch (check)
    {
        case 0: extra(check); break;
        case 1: extra(check); break;
        case 2: extra(check); break;
        case 3: extra(check); break;

        default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; break;
    }
}