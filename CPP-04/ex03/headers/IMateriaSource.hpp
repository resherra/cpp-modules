#ifndef i_materia_source
#define i_materia_source

#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual AMateria*   createMateria(std::string const & type) = 0;
        virtual void        learnMateria(AMateria*) = 0;
        virtual             ~IMateriaSource() {}

};

#endif