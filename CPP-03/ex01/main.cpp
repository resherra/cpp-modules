#include "ScavTrap.hpp"

int main()
{
    ScavTrap  scavtrap("jack");
    
    scavtrap.attack("mouse");
    scavtrap.beRepaired(10);
    scavtrap.takeDamage(10);
    scavtrap.guardGate();
}