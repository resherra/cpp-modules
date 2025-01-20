#ifndef fragtrap_hpp
#define fragtrap_hpp

#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
    public:
        void attack(const std::string& target);
        void highFivesGuys(void);

        FragTrap    operator=(const FragTrap&);

        FragTrap(int, int);
        FragTrap(std::string);
        FragTrap();
        FragTrap(const FragTrap&);
        ~FragTrap();
};

#endif