#ifndef zombie_hpp
#define zombie_hpp

#include <string>

class Zombie {
    public:
        void    announce(void);
        void    setName(std::string name);

        Zombie();
        ~Zombie();
    private:
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif