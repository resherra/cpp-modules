#include "FragTrap.hpp"

int main()
{
    FragTrap  fragtrap("jack");
    
    fragtrap.attack("mouse");
    fragtrap.beRepaired(10);
    fragtrap.takeDamage(10);
    fragtrap.highFivesGuys();
}