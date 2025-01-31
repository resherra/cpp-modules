#ifndef materia_source
#define materia_source

#include "IMateriaSource.hpp"

class MateriaSource:  public IMateriaSource
{
    public:
        void            learnMateria(AMateria*);
        AMateria*       createMateria(std::string const & type);

        MateriaSource&  operator=(const MateriaSource&);

        MateriaSource();
        MateriaSource(const MateriaSource&);
        ~MateriaSource();
    private:
        AMateria*       inventory[4];
};



#endif