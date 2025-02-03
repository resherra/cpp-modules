#ifndef brain_hpp
#define brain_hpp

#include "utils.hpp"

class Brain
{
    public:
        std::string ideas[100];
        void    makeSound() const;

        Brain&  operator=(const Brain&);

        Brain(const Brain&);

        Brain();
        ~Brain();
};

#endif