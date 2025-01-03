#ifndef zombie_hpp
#define zombie_hpp

#include <string>

class Zombie {
    public:
        void    announce(void);

        Zombie(std::string name);
        ~Zombie();

    private:
        std::string name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif