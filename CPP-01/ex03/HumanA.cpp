#include "HumanA.hpp"
#include <iostream>

    
HumanA::HumanA(std::string humanName, Weapon &weaponType): weapon(weaponType)
{
    name = humanName;
}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}