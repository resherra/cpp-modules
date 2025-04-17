#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"

void presisential()
{

    Bureaucrat manager("jack", 1);
    Bureaucrat cashier("joe", 150);
    PresidentialPardonForm  testing("testing");

    std::cout << testing;
    std::cout << std::endl;

    manager.signForm(testing);
    std::cout << std::endl;

    manager.executeForm(testing);

    std::cout << std::endl;

    cashier.executeForm(testing);


}

void robot()
{

    Bureaucrat manager("jack", 1);
    Bureaucrat cashier("joe", 150);
    RobotomyRequestForm     testing("testing");

    std::cout << testing;
    std::cout << std::endl;

    manager.signForm(testing);
    std::cout << std::endl;

    manager.executeForm(testing);

    std::cout << std::endl;

    cashier.executeForm(testing);
    std::cout << std::endl;
    manager.executeForm(testing);
}

void shruburey()
{
    Bureaucrat manager("jack", 1);
    Bureaucrat cashier("joe", 150);
    ShrubberyCreationForm testing("testing");

    std::cout << testing;
    std::cout << std::endl;

    manager.signForm(testing);
    std::cout << std::endl;

    manager.executeForm(testing);
    std::cout << std::endl;

    cashier.executeForm(testing);
}

int    main()
{
    // shruburey();
    // robot();
    presisential();
}