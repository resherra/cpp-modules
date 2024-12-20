#ifndef zombie_hpp
#define zombie_hpp

#include <string>

void randomChump(std::string name);

class Zombie {
    public:
        void    announce(void);

        Zombie(std::string name);
        ~Zombie();

    private:
        std::string name;
};

#endif