#include "Bureaucrat.hpp"

Bureaucrat*    createBureaucrat(int grade)
{
    try
    {
        Bureaucrat* bureaucrat = new Bureaucrat("jack", grade);
        return bureaucrat;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << '\n';
    }
    return NULL;
}

void    foo()
{
    std::cout << "\n\n";
    std::system("leaks -q bureaucrat");
}

int main()
{
    std::atexit(foo);
    int grade = 1;

    Bureaucrat* newBureaucrat = createBureaucrat(grade); 
    if (!newBureaucrat)
        return 1;
        
    Bureaucrat& bureaucrat = *newBureaucrat;    
    std::cout << bureaucrat;

    try
    {
        bureaucrat.incrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << '\n';
        delete &bureaucrat;
        return 1;
    }

    delete  &bureaucrat;
}