#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"

int main()
{   
    std::cout << "------subject test-------" << "\n";
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; //should not create a leak
    delete i;

    std::cout << "-------required tests-------" << "\n";
    Animal* animals[4] = { new Cat(), new Dog(), new Cat(), new Dog()};

    for (int i = 0; i < 4; i++)
    {
        print("--");
        std::cout << animals[i]->getType() << " ";
        animals[i]->makeSound();
        delete animals[i]; 
    }

    std::cout << "-----deep copy-----" << "\n";

    Dog basic;
    basic.setIdeas(0, "i want to eat!");
    basic.setIdeas(1, "i want to sleep!");
    basic.setIdeas(2, "i want to brake!");
    {
        Dog tmp = basic;
    }
    for (int i = 0; i < 3; i++)
        std::cout << basic.getIdeas(i) << "\n";

}