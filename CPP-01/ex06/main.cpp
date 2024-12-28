#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Not enough args!" << std::endl;
        return 1;
    }
    
    Harl harl;
    harl.complain(av[1]);
}