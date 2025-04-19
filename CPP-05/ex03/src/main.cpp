#include "../headers/Intern.hpp"

void    foo()
{
    std::cout << std::endl;
    std::system("leaks -q intern");
}

int    main()
{
    std::atexit(foo);
    Intern intern;
    Bureaucrat  manager("jack", 1);

    AForm *form = intern.makeForm("Shrubbery Creation", "testing");

    if (form)
    {
        std::cout << std::endl;
        manager.signForm(*form);

        std::cout << std::endl;
        manager.executeForm(*form);

        delete (form);
    }
}