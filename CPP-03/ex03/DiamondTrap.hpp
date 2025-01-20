#ifndef diamondtrap_hpp
#define diamondtrap_hpp

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
    public:
        void attack(const std::string& target);
        void whoAmI();

        DiamondTrap    operator=(const DiamondTrap&);

        DiamondTrap();
        DiamondTrap(const FragTrap&);
        ~DiamondTrap();

        DiamondTrap(std::string);
    private:
        std::string Name;
};

#endif