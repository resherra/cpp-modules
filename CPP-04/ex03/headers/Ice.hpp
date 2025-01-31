#ifndef ice_hpp
#define ice_hpp

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        AMateria*   clone() const;
        void        use(ICharacter& target);

        Ice&        operator=(const Ice&);

        Ice();
        Ice(const Ice&);
        ~Ice();
};

#endif