#ifndef INTERN_HPP
#define INTERN_HPP

#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"


class Intern
{
    public:
        AForm*    makeForm(std::string, std::string);
        Intern &operator=(Intern &);
        void    hello(){std::cout << "something" << std::endl;};


        Intern();
        Intern(Intern &);
        ~Intern();
    private:
        AForm*  ShrubberyCreation(std::string);
        AForm*  RobotomyRequest(std::string);
        AForm*  PresidentialPardon(std::string);
};

#endif