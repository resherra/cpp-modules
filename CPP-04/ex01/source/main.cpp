#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"

int main()
{
    Dog basic;
    print("---");
    {
        Dog tmp(basic);
    }
    print("---");
}