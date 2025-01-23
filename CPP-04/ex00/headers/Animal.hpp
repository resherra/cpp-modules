#ifndef animal_hpp
#define animal_hpp

#include <string>
#include <iostream>

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

void    print(std::string);

#endif