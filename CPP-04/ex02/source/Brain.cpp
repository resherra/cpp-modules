#include "../headers/Brain.hpp"

//default constructor
Brain::Brain()
{
    print("Brain created!");
}

//destructor
Brain::~Brain()
{
    print("Brain destroyed!");
}

//copy constructor
Brain::Brain(const Brain& other)
{
    *this = other;
}

// copy assignment operator
Brain&  Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
       
    return *this;
}