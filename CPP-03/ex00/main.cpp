#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("jack");

    claptrap.attack("mouse");
    claptrap.beRepaired(4);
    claptrap.takeDamage(5);
}