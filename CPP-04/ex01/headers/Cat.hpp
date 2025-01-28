#ifndef cat_hpp
#define cat_hpp

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    public:
        void    makeSound() const;

        Cat&  operator=(const Cat&);

        Cat(const Cat&);

        Cat();
        virtual ~Cat();
    private:
        Brain *brain;
        void    deepCopy(const Cat&);

};

#endif