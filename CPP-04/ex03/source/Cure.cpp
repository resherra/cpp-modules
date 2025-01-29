#include "../headers/Cure.hpp"

AMateria*   Cure::clone() const 
{
    return new Cure;
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << " ’s wounds *" << "\n";
}

Cure::Cure(): AMateria("cure")
{
    print("Cure default constructor!");
}

Cure::Cure(const Cure& other)
{
    (void)other;
    print("Cure copy constructor");
} 

Cure&    Cure::operator=(const Cure& other)
{
    (void)other;
    return *this;
}

Cure::~Cure()
{
    print("Cure default destrcutor!");
}