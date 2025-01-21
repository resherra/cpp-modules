#include "FragTrap.hpp"

//default constructor
FragTrap::FragTrap()
{
    std::cout << "Default FragTrap constructor called" << '\n';
}

FragTrap::FragTrap(std::string n_name): ClapTrap(n_name)
{
    std::cout << "FragTrap name constructor called" << std::endl;
    Hit = 100;
    Energy = 100;
    Attack= 30;
}

//copy constructor
FragTrap::FragTrap(const FragTrap& fragtrap)
{
    std::cout << "FragTrap copy constructor called" << '\n';
    *this = fragtrap;
}

//assignment operator
FragTrap    FragTrap::operator=(const FragTrap& fragtrap)
{
    Name = fragtrap.Name;
    Hit = fragtrap.Hit;
    Energy = fragtrap.Energy;
    Attack = fragtrap.Attack;

    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destrcutor called" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (!Hit || !Energy)
    {
        std::cout << "Not enough Hit or Energy points, can't do anything!" << '\n';
        return;
    }
    std::cout << "FragTrap " + Name + " attacks " + target + ", causing " <<  Attack << " points of damage!" << '\n';
    Energy--;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "High five guuuys!!" << std::endl;
}
