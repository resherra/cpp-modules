#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"

int main()
{  
    Animal* animals[4] = { new Cat(), new Dog(), new Cat(), new Dog()};

    for (int i = 0; i < 4; i++)
    {
        print("--");
        delete animals[i]; 
    }
}