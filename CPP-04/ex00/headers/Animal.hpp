#ifndef animal_hpp
#define animal_hpp

#include "utils.hpp"

class Animal
{
    public:
        virtual void    makeSound() const;
        std::string     getType() const;

        Animal  operator=(const Animal&);

        Animal(const Animal&);

        Animal();
        ~Animal();
    protected:
        std::string type;
};


#endif