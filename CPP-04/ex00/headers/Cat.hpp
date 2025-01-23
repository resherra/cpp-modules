#ifndef cat_hpp
#define cat_hpp

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        void    makeSound() const;

        Cat  operator=(const Cat&);

        Cat(const Cat&);

        Cat();
        ~Cat();

};

#endif