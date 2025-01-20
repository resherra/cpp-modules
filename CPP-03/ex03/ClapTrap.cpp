#include "ClapTrap.hpp"

//default constructor
ClapTrap::ClapTrap(): Hit(10), Energy(10), Attack(0)
{
    std::cout << "Default claptrap constructor called" << '\n';
}

//destrucor
ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap destructor called" << '\n';
}

//copy constructor
ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
    std::cout << "Claptrap copy constructor called" << '\n';
    *this = claptrap;
}

//assignment operator
ClapTrap    ClapTrap::operator=(const ClapTrap& claptrap)
{
    Name = claptrap.Name;
    Hit = claptrap.Hit;
    Energy = claptrap.Energy;
    Attack = claptrap.Attack;

    return *this;
}

//name constructor
ClapTrap::ClapTrap(std::string name): Name(name), Hit(10), Energy(10), Attack(0)
{
    std::cout << "Claptrap name constructor called" << '\n';
}

void    ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " + Name + " attacks " + target + ", causing " <<  Attack << " points of damage!" << '\n';
}


void    ClapTrap::beRepaired(unsigned int amount)
{
        std::cout << "ClapTrap " + Name + " gets " << amount << " points back!" << '\n';
}

void    ClapTrap::takeDamage(unsigned int amount)
{
        std::cout << "ClapTrap " + Name + " took " << amount << " points of damage!" << '\n';    
}

