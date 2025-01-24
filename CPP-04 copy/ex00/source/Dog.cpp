#include "../headers/Dog.hpp"


//default constructor
Dog::Dog()
{
    type = "Dog";
    print("Dog default constrcutor!");
}

//destructor
Dog::~Dog()
{
    print("Dog default destructor!");
}

//copy constructor
Dog::Dog(const Dog& other)
{
    *this = other;
}

// copy assignment operator
Dog  Dog::operator=(const Dog& other)
{
    type = other.type;
    return *this;
}

void    Dog::makeSound() const
{
    print("barking");    
}