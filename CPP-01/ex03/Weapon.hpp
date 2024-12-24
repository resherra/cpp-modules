#ifndef weapon_hpp
#define weapon_hpp

#include <string>

class Weapon
{
    public:
        void    setType(std::string);
        const std::string&    getType();

        Weapon();
        Weapon(std::string);
    private:
        std::string type;
};

#endif