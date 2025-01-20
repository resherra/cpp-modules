#ifndef claptrap_h
#define claptrap_h

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);

        ClapTrap    operator=(const ClapTrap&);
  
        ClapTrap();        
        ClapTrap(const ClapTrap&);
        ~ClapTrap();
        
        ClapTrap(std::string);
    protected:
        std::string Name;
        int         Hit;
        int         Energy;
        int         Attack;
};

#endif