#include "../headers/WrongCat.hpp"

//default constructor
WrongCat::WrongCat()
{
    type = "WrongCat";
    print("WrongCat default constrcutor!");
}

//destructor
WrongCat::~WrongCat()
{
    print("WrongCat default destructor!");
}

//copy constructor
WrongCat::WrongCat(const WrongCat& other)
{
    *this = other;
}

// copy assignment operator
WrongCat  WrongCat::operator=(const WrongCat& other)
{
    type = other.type;
    return *this;
}

void    WrongCat::makeSound() const
{
    print("Wrong cat meow");    
}