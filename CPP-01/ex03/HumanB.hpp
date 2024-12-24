#ifndef human_b_hpp
#define human_b_hpp

#include "Weapon.hpp"

class HumanB
{
    public:
        void    attack();
        void    setWeapon(Weapon&);

        HumanB(std::string);
    private:
        std::string name;
        Weapon* weapon;
};


#endif