#include "Zombie.hpp"
#include <iostream>

// Zombie::Zombie()
// {
//     //default constructor 
// }

Zombie::Zombie(std::string namech)
{
    name = namech;
}


Zombie::~Zombie()
{
    std::cout << name << " is dying.." << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}