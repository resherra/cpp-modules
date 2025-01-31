#include "../headers/MateriasList.hpp"

void    MateriasList::add(AMateria* materia)
{
    if (!head)
	{
        head = new Node(materia);
		return ;
	}
    Node* curr = head;
    while (curr->next)
        curr = curr->next;
    curr->next = new Node(materia);
}

MateriasList::MateriasList(): head(NULL)
{
    print("MateriasList default constrcutor!");
}

MateriasList::MateriasList(const MateriasList&)
{
    print("MateriaList copy constrcutor");
    //copy constrcutor
}


MateriasList&   MateriasList::operator=(const MateriasList&)
{
    //assignment operator
    return *this;
}

MateriasList::~MateriasList()
{
    print("MateriaList destructor");
    Node* tmp = head;
    Node *cur;

    while (tmp)
    {
        cur = tmp;
        tmp = tmp->next;
        delete cur;
        cur = NULL;
    }
}