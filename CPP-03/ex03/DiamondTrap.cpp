#include "DiamondTrap.hpp"

//default constructor
DiamondTrap::DiamondTrap()
{
    std::cout << "Default DiamondTrap constructor called" << '\n';
}

//name constructor
DiamondTrap::DiamondTrap(std::string n_name): ClapTrap(n_name + "_clap_name"), ScavTrap(n_name), FragTrap(n_name), Name(n_name)
{
    std::cout << "DiamondTrap name constructor called" << std::endl;
    Energy = 50;
}

//copy constructor
DiamondTrap::DiamondTrap(const FragTrap& fragtrap)
{
    std::cout << "DiamondTrap copy constructor called" << '\n';
    *this = fragtrap;
}

//assignment operator
DiamondTrap    DiamondTrap::operator=(const DiamondTrap& diamondtrap)
{
    Name = diamondtrap.Name;
    Hit = diamondtrap.Hit;
    Energy = diamondtrap.Energy;
    Attack = diamondtrap.Attack;

    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destrcutor called" << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}


void    DiamondTrap::whoAmI()
{
    std::cout << "My name is " << Name << std::endl;
    std::cout << "ClapTrap name is " << ClapTrap::Name << std::endl;
}