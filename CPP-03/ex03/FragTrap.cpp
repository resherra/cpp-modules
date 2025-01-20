#include "FragTrap.hpp"

//default constructor
FragTrap::FragTrap()
{
    std::cout << "Default fragtrap constructor called" << '\n';
}

//hit / attack constructor
FragTrap::FragTrap(int hit, int attack)
{
    std::cout << "fragtrap name constructor called" << std::endl;
    Hit = hit;
    Attack = attack;
}

FragTrap::FragTrap(std::string n_name): ClapTrap(n_name)
{
    std::cout << "fragtrap name constructor called" << std::endl;
    Hit = 100;
    Energy = 100;
    Attack= 30;
}

//copy constructor
FragTrap::FragTrap(const FragTrap& fragtrap)
{
    std::cout << "fragtrap copy constructor called" << '\n';
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
    std::cout << "fragtrap destrcutor called" << std::endl;
}


void    FragTrap::attack(const std::string& target)
{
    std::cout << "fragtrap " + Name + " attacks " + target + ", causing " <<  Attack << " points of damage!" << '\n';
}



void    FragTrap::highFivesGuys(void)
{
    std::cout << "High five guuuys!!" << std::endl;
}
