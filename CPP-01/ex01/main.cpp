#include "Zombie.hpp"

int main()
{
    int zombies = 5;
    Zombie *horde = zombieHorde(zombies, "john");

    for (int i = 0; i < zombies; i++)
        horde[i].announce();

    delete[] horde;    
    return 0;
}