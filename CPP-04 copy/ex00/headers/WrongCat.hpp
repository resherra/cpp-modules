#ifndef wrong_cat_hpp
#define wrong_cat_hpp

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        void    makeSound() const;

        WrongCat  operator=(const WrongCat&);

        WrongCat(const WrongCat&);

        WrongCat();
        ~WrongCat();
};

#endif