#include "DiamondTrap.hpp"

//default constructor
DiamondTrap::DiamondTrap()
{
    std::cout << "Default diamondtrap constructor called" << '\n';
}

//name constructor
DiamondTrap::DiamondTrap(std::string n_name): ClapTrap(n_name + "_clap_name"), ScavTrap(50), FragTrap(100, 30), Name(n_name)
{
    std::cout << "diamondtrap name constructor called" << std::endl;
    Hit = FragTrap::Hit;
    Energy = ScavTrap::Energy;
    Attack= FragTrap::Attack;
    std::cout << Hit << std::endl;
    std::cout << Energy << std::endl;
    std::cout << Attack << std::endl;

}

//copy constructor
DiamondTrap::DiamondTrap(const FragTrap& fragtrap)
{
    std::cout << "diamondtrap copy constructor called" << '\n';
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
    std::cout << "diamondtrap destrcutor called" << std::endl;
}


void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}


void    DiamondTrap::whoAmI()
{
    std::cout << "My name " << Name << std::endl;
    std::cout << "ClapTrap name's " << ClapTrap::Name << std::endl;
}