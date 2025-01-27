#include "../headers/WrongAnimal.hpp"

//default constructor
WrongAnimal::WrongAnimal(): type("animal")
{
    print("WrongAnimal default constrcutor!");
}

//destructor
WrongAnimal::~WrongAnimal()
{
    print("WrongAnimal default destructor!");
}

//copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    *this = other;
}

// copy assignment operator
WrongAnimal&  WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

void    WrongAnimal::makeSound() const
{
    print("maybe it's an animal sound!");
}

std::string    WrongAnimal::getType() const
{
    return type;
}
