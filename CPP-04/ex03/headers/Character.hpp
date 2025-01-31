#ifndef character_hpp
#define character_hpp

#include "ICharacter.hpp"
#include "MateriasList.hpp"


class Character: public ICharacter
{
    public:
        MateriasList*       left;
        
        std::string const&  getName() const;
        void                equip(AMateria* m);
        void                unequip(int idx);
        void                use(int idx, ICharacter& target);

        Character&          operator=(const Character&);

        Character();
        Character(std::string);
        Character(const Character&);
        ~Character();    
    private:
        std::string         name;
        AMateria*           inventory[4];
};

#endif