#include "../headers/Cat.hpp"

//default constructor
Cat::Cat()
{
    type = "Cat";
    print("Cat default constrcutor!");
}

//destructor
Cat::~Cat()
{
    print("Cat default destructor!");
}

//copy constructor
Cat::Cat(const Cat& other)
{
    *this = other;
}

// copy assignment operator
Cat&  Cat::operator=(const Cat& other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

void    Cat::makeSound() const
{
    print("meowing");    
}