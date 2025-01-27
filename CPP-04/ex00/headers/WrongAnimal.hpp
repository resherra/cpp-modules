#ifndef wrong_animal_hpp
#define wrong_animal_hpp

#include "utils.hpp"

class WrongAnimal
{
    public:
        void            makeSound() const;
        std::string     getType() const;

        WrongAnimal&  operator=(const WrongAnimal&);

        WrongAnimal(const WrongAnimal&);

        WrongAnimal();
        virtual ~WrongAnimal();
    protected:
        std::string type;
};

#endif