#include "../headers/MateriaSource.hpp"

void    MateriaSource::learnMateria(AMateria* materia)
{
    if (!materia)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = materia;
            return;
        }
    }
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] && inventory[i]->getType() == type)
        {
            return inventory[i]->clone();
        }
    }
    return 0;
}


//default constructor
MateriaSource::MateriaSource()
{
    print("Materia source default constructor!");
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}


MateriaSource&  MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            inventory[i] = other.inventory[i]->clone();
        }
    }
    return *this;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    print("Materia source copy constructor!");
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}


MateriaSource::~MateriaSource()
{
    print("Materia source default destructor!");
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}

