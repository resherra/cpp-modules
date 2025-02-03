#ifndef dog_hpp
#define dog_hpp

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:
        void    makeSound() const;
        void    setIdeas(int, std::string);
        std::string    getIdeas(int);

        Dog&  operator=(const Dog&);

        Dog(const Dog&);

        Dog();
        ~Dog();
    private:
        Brain   *brain;
        void    deepCopy(const Dog&);

};

#endif