#include "ScavTrap.hpp"

//default constructor
ScavTrap::ScavTrap()
{
    std::cout << "Default ScavTrap constructor called" << '\n';
}

//energy constructor
ScavTrap::ScavTrap(int energy)
{
    Energy = energy;
    std::cout << "Energy ScavTrap constructor called" << '\n';
}

ScavTrap::ScavTrap(std::string n_name): ClapTrap(n_name)
{
    std::cout << "ScavTrap name constructor called" << std::endl;
    Hit = 100;
    Energy = 50;
    Attack= 20;
}

//copy constructor
ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
    std::cout << "ScavTrap copy constructor called" << '\n';
    *this = scavtrap;
}

//assignment operator
ScavTrap    ScavTrap::operator=(const ScavTrap& scavtrap)
{
    Name = scavtrap.Name;
    Hit = scavtrap.Hit;
    Energy = scavtrap.Energy;
    Attack = scavtrap.Attack;

    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destrcutor called" << std::endl;
}


void    ScavTrap::attack(const std::string& target)
{
    if (!Hit || !Energy)
    {
        std::cout << "Not enough Hit or Energy points, can't do anything!" << '\n';
        return;
    }
    std::cout << "ScavTrap " + Name + " attacks " + target + ", causing " <<  Attack << " points of damage!" << '\n';
    Energy--;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
