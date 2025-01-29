#ifndef cure_hpp
#define cure_hpp

#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        AMateria*   clone() const;
        void        use(ICharacter& target);

        Cure&    operator=(const Cure&);

        Cure();
        Cure(const Cure&);
        ~Cure();
};

#endif