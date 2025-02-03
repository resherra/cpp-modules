#include "../headers/Cat.hpp"

//default constructor
Cat::Cat()
{
    print("Cat default constrcutor!");
    type = "Cat";
    brain = new Brain();
}

//destructor
Cat::~Cat()
{
    print("Cat default destructor!");
    delete brain;
}

void    Cat::deepCopy(const Cat& other)
{
    delete  brain;

    type = other.type;
    brain = new Brain(*other.brain);
}

//copy constructor
Cat::Cat(const Cat& other): Animal()
{
    print("Cat copy constructor!");
    type = other.type;
    brain = new Brain(*other.brain);
}

// copy assignment operator
Cat&  Cat::operator=(const Cat& other)
{
    if (this != &other)
       deepCopy(other);
    return *this;
}

void    Cat::makeSound() const
{
    print("meowing");    
}