#include "../headers/Intern.hpp"

void    foo()
{
    std::cout << std::endl;
    system("leaks -q bs");
}

int    main()
{
    // atexit(foo);
    Intern intern;
    AForm *form = intern.makeForm("Shrubbery Creation", "testing");

    (void)form;
    // Bureaucrat  manager("jack", 1);



    // manager.signForm(*form);
}   