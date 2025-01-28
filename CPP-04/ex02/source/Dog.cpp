#include "../headers/Dog.hpp"

//default constructor
Dog::Dog()
{
    print("Dog default constrcutor!");
    type = "Dog";
    brain = new Brain();
}

//destructor
Dog::~Dog()
{
    print("Dog default destructor!");
    delete brain;
}

void    Dog::deepCopy(const Dog& other)
{
    delete  brain;

    type = other.type;

    if (other.brain)
    {
        brain = new Brain(*other.brain);
    }
}

//copy constructor
Dog::Dog(const Dog& other): Animal()
{
    print("Dog copy constructor!");
    deepCopy(other);
}

// copy assignment operator
Dog&  Dog::operator=(const Dog& other)
{
    if (this != &other)
       deepCopy(other);
    return *this;
}

void    Dog::makeSound() const
{
    print("barking");    
}