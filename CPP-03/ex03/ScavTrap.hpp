#ifndef scavtrap_hpp
#define scavtrap_hpp

#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
    public:
        void attack(const std::string& target);
        void guardGate();

        ScavTrap    operator=(const ScavTrap&);

        ScavTrap(std::string);
        ScavTrap();
        ScavTrap(int);
        ScavTrap(const ScavTrap&);
        ~ScavTrap();
};

#endif