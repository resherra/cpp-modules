#ifndef brain_hpp
#define brain_hpp

#include "utils.hpp"

class Brain
{
    public:
        void    makeSound() const;

        Brain&  operator=(const Brain&);

        Brain(const Brain&);

        Brain();
        ~Brain();
    private:
        std::string ideas[100];
};

#endif