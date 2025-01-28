#ifndef animal_hpp
#define animal_hpp

#include "utils.hpp"

class Animal
{
    public:
        virtual void    makeSound() const = 0;
        std::string     getType() const;

        Animal& operator=(const Animal&);

        Animal(const Animal&);

        Animal();
        virtual ~Animal();
    protected:
        std::string type;
};


#endif