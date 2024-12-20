#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("john");  
    randomChump("doe");
    zombie->announce();
    delete(zombie);
}