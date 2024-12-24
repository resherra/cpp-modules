#include "HumanA.hpp"
#include <iostream>

    
HumanA::HumanA(std::string humanName, Weapon &weaponType): name(humanName), weapon(weaponType) {};

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}