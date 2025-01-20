#ifndef fragtrap_hpp
#define fragtrap_hpp

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        void        attack(const std::string& target);
        void        highFivesGuys(void);

        FragTrap    operator=(const FragTrap&);

        FragTrap();
        FragTrap(const FragTrap&);
        ~FragTrap();

        FragTrap(std::string);
};

#endif