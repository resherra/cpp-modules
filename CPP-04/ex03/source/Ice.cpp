#include "../headers/Ice.hpp"

AMateria*   Ice::clone() const 
{
    return new Ice;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << "\n";
}

Ice::Ice(): AMateria("ice")
{
    print("Ice default constructor!");
}

Ice::Ice(const Ice& other): AMateria("ice")
{
    (void)other;
    print("Ice copy constructor");
} 

Ice&    Ice::operator=(const Ice& other)
{
    (void)other;
    return *this;
}

Ice::~Ice()
{
    print("Ice destrcutor!");
}