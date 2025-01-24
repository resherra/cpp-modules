#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"
#include "../headers/WrongCat.hpp"

int main()
{
    // const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // delete meta;
    print("----");
    delete j;
    delete i;

    // print("----wrong animal----");
    // const WrongAnimal* wrong_meta = new WrongAnimal();
    // const WrongAnimal* wrong_i = new WrongCat();

    // std::cout << wrong_i->getType() << " " << std::endl;
    // wrong_i->makeSound(); //will output the cat sound!
    // wrong_meta->makeSound();

    return 0;
}