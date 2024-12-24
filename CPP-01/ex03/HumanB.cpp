#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string humanName)
{
    name = humanName;
}

void    HumanB::setWeapon(Weapon& weaponType)
{
    weapon = &weaponType;
}


void    HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}