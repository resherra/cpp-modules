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

void    Harl::complain(std::string state)
{
    std::string comp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    while (i < 4)
    {
        if (state == comp[i])
            break;
        i++;
    }
    if (i == 4)
        return;
    (this->*a[i])();
}