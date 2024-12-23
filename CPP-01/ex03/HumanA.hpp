#ifndef human_a_hpp
#define human_a_hpp

#include "Weapon.hpp"

class HumanA
{
    public:
        void    attack();

        HumanA();
        ~HumanA();
    private:
        std::string name;
        Weapon weapon;
};


#endif