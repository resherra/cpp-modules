#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string weapon)
{
    type = weapon; 
}

const   std::string& Weapon::getType()
{
    return type;
}

void    Weapon::setType(std::string weaponType)
{
    type = weaponType;
}