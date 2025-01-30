#ifndef materias_list_hpp
#define materias_list_hpp

#include "AMateria.hpp"


struct   Node
{
    AMateria*   materia;
    Node* next;

    Node(AMateria* materia) {this->materia = materia; next = NULL;};
};

class MateriasList
{
    public:
        Node*   head;
        void    add(AMateria*);

        MateriasList&   operator=(const MateriasList&);

        MateriasList();
        MateriasList(const MateriasList&);
        ~MateriasList();
    // private:
};

#endif