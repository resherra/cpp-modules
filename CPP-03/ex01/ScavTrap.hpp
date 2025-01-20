#ifndef scavtrap_hpp
#define scavtrap_hpp

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public:
        void attack(const std::string& target);
        void guardGate();

        ScavTrap    operator=(const ScavTrap&);

        ScavTrap();
        ScavTrap(const ScavTrap&);
        ~ScavTrap();

        ScavTrap(std::string);

};

#endif