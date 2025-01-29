#ifndef a_materia_hpp
#define a_materia_hpp

class AMateria;

#include "utils.hpp"
#include "ICharacter.hpp"

class AMateria
{
    public:
        std::string const&  getType() const; //Returns the materia type
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);

        AMateria&           operator=(const AMateria&);

        AMateria();
        AMateria(const AMateria&);
        AMateria(std::string const & type);

        virtual ~AMateria();
    protected:
        std::string type;
};

#endif