#ifndef human_b_hpp
#define human_b_hpp

#include "Weapon.hpp"

class HumanB
{
    public:
        void    attack();

        HumanB();
        ~HumanB();
    private:
        std::string name;
        Weapon weapon;
};


#endif