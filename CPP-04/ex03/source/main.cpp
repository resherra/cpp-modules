#include "../headers/AMateria.hpp"
#include "../headers/Ice.hpp"
#include "../headers/Cure.hpp"
#include "../headers/Character.hpp"
#include "../headers/MateriaSource.hpp"


void	subjectTest(){
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

void	extratest(){
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("lbatal");
	ICharacter *enemy = new Character("enemy");
	for (size_t i = 0; i < 4; i++)
	{
		if (i % 2 != 0){
			AMateria* tmp = src->createMateria("ice");
			me->equip(tmp);
		}
		else {
			AMateria* tmp = src->createMateria("cure");
			me->equip(tmp);
		}
	}

	AMateria* tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(0, *enemy);
	me->use(1, *enemy);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->use(1, *enemy);
	delete src;
	delete me;
	delete enemy;
	delete tmp;
}

void    mytest()
{
    Character a("Jack");
    Character b("Other");
    Character c("joe");

    AMateria* jj = new Ice();
    c.equip(jj);
    c.unequip(0);

    AMateria* ice = new Ice();
    a.equip(ice);
    a.unequip(0);
    

    b = a;  
    b = c;  


    Node* curr  = b.left->head;

    while (curr)
    {
        std::cout << curr->materia->getType() << std::endl;
        curr = curr->next;
    }
}

int main()
{
    subjectTest();
    std::cout << "----" << std::endl;
    mytest();
    std::cout << "----" << std::endl;
    extratest();

    // system("leaks -q interfaces");
}

