#include "../headers/AMateria.hpp"
#include "../headers/Ice.hpp"
#include "../headers/Cure.hpp"
#include "../headers/Character.hpp"


int main()
{   
    Ice testing;
    Cure joe;
    Character character("redouan");

    


    std::cout << "--" << std::endl;
    // print(testing.getType());
    testing.use(character);
    joe.use(character);
    std::cout << "--" << std::endl;
}