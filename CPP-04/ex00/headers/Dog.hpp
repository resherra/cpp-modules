#ifndef dog_hpp
#define dog_hpp

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        void    makeSound() const;

        Dog&  operator=(const Dog&);

        Dog(const Dog&);

        Dog();
        ~Dog();

};

#endif