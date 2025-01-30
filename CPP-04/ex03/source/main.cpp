#include "../headers/AMateria.hpp"
#include "../headers/Ice.hpp"
#include "../headers/Cure.hpp"
#include "../headers/Character.hpp"


int main()
{
    Character*   jack = new Character("jack");
    AMateria*    a = new Ice;
    AMateria*    b = new Cure;


    jack->equip(a);
    jack->equip(b);
    jack->unequip(0);
    jack->unequip(1);


    Node*   curr = jack->left.head;


    std::cout << "--"<< std::endl;
    while (curr)
    {
        std::cout << curr->materia->getType() << std::endl;
        curr = curr->next;
    }
    std::cout << "--"<< std::endl;


}