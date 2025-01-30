#include "../headers/MateriasList.hpp"

void    MateriasList::add(AMateria* materia)
{
    Node* curr = head;

    while (curr->next)
        curr = curr->next;
    curr->next = new Node(materia);
}

MateriasList::MateriasList()
{
    //default constrctor;
}

MateriasList::MateriasList(const MateriasList&)
{
    //copy constrcutor
}


MateriasList&   MateriasList::operator=(const MateriasList&)
{
    //assignment operator
    return *this;
}

MateriasList::~MateriasList()
{
    //destructor
}