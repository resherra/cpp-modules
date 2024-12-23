#ifndef weapon_hpp
#define weapon_hpp

#include <string>

class Weapon
{
    public:
        Weapon();
        ~Weapon();
    private:
        std::string type;
};

#endif