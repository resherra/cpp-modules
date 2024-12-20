#include "Zombie.hpp"
#include <iostream>

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