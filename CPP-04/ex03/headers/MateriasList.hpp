#ifndef materias_list_hpp
#define materias_list_hpp

#include "AMateria.hpp"
#include "Node.hpp"

class MateriasList
{
    public:
        Node*           head;
        void            add(AMateria*);

        MateriasList&   operator=(const MateriasList&);

        MateriasList();
        MateriasList(const MateriasList&);
        ~MateriasList();
};

#endif