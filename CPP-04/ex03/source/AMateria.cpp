#include "../headers/AMateria.hpp"

std::string const& AMateria::getType() const
{
    return type;
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "Raw Materia used!" << target.getName() << std::endl;
}

AMateria::AMateria(std::string const & type): type(type)
{
    print("AMateria type constructor!");
}

AMateria::AMateria()
{
    print("AMateria default constructor!");
}

AMateria::AMateria(const AMateria& other)
{
    (void)other;
    print("AMateria copy constructor");
} 

AMateria&    AMateria::operator=(const AMateria& other)
{
    (void)other;
    return *this;
}

AMateria::~AMateria()
{
    print("AMateria destrcutor");
}