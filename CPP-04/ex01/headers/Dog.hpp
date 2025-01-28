#ifndef dog_hpp
#define dog_hpp

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:
        void    makeSound() const;

        Dog&  operator=(const Dog&);

        Dog(const Dog&);

        Dog();
        virtual ~Dog();
    private:
        Brain   *brain;
        void    deepCopy(const Dog&);

};

#endif