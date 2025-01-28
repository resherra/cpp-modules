#ifndef a_materia_hpp
#define a_materia_hpp

#include <string>
#include "ICharacter.hpp"

class AMateria
{
    public:
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        AMateria&   operator=(AMateria&);

        AMateria();
        AMateria(const AMateria&);
        AMateria(std::string const & type);

        virtual ~AMateria();
    protected:
        std::string type;
};

#endif