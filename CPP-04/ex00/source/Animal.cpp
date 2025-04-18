#include "../headers/Animal.hpp"

//default constructor
Animal::Animal(): type("animal")
{
    print("Animal default constrcutor!");
}

//destructor
Animal::~Animal()
{
    print("Animal default destructor!");
}

//copy constructor
Animal::Animal(const Animal& other)
{
    *this = other;
}

// copy assignment operator
Animal&  Animal::operator=(const Animal& other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

void    Animal::makeSound() const
{
    print("maybe it's an animal sound!");
}

std::string    Animal::getType() const
{
    return type;
}
