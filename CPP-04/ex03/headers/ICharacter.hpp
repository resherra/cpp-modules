#ifndef i_character_hpp
#define i_character_hpp

class ICharacter;

#include "AMateria.hpp"

class ICharacter
{
    public:
        virtual std::string const&  getName() const = 0;
        virtual void                equip(AMateria* m) = 0;
        virtual void                unequip(int idx) = 0;
        virtual void                use(int idx, ICharacter& target) = 0;
        virtual                     ~ICharacter() {}
};

#endif