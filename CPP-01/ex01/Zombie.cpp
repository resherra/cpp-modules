#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
    std::cout << "bip, def constructor.." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " is dying.." << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string namech)
{
    name = namech;
}