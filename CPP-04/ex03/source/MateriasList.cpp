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

MateriasList*   MateriasList::duplicate()
{
    MateriasList* clone = new MateriasList;
    Node* curr = head;

    while (curr)
    {
        clone->add(curr->materia->clone());
        curr = curr->next;
    }
    return clone;
}

MateriasList::MateriasList(): head(nullptr)
{
    print("MateriasList default constrcutor!");
}

MateriasList::MateriasList(const MateriasList&)
{
    print("MateriaList copy constrcutor");
}

MateriasList&   MateriasList::operator=(const MateriasList&)
{
    print("Materia list assignment operator!");
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
        cur = nullptr;
    }
}