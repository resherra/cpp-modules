#include "../headers/Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern &other) 
{
    *this = other;
}

Intern &Intern::operator=(Intern &other)
{
    (void)other;
    return *this;
}

AForm *Intern::ShrubberyCreation(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::RobotomyRequest(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::PresidentialPardon(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm*  Intern::makeForm(std::string formName, std::string target)
{
    std::string formNames[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};

    AForm *(Intern::*ptr[3])(std::string) = {
        &Intern::ShrubberyCreation,
        &Intern::RobotomyRequest,
        &Intern::PresidentialPardon
    };
    
    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            AForm *form = (this->*ptr[i])(target);
            std::cout << "Intern creates: " << std::endl << *form;
            return form;
        }
    }
    std::cerr << "The provided form name does not exist!" << std::endl;
    return NULL;
}
