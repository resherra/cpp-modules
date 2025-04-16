#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class   Bureaucrat;


std::ostream&   operator<<(std::ostream&, const Bureaucrat&);

class GradeTooLowException: public std::exception
{
    public:
        const char* what() const throw();
};

class GradeTooHighException: public std::exception
{   
    public:
        const char* what() const throw();
};

#include "Form.hpp"

class Bureaucrat
{
    public:
        std::string  getName() const;
        int          getGrade()  const;
        void         incrementGrade();
        void         decrementGrade();

        void         signForm(Form&);

        Bureaucrat(std::string, int);
        Bureaucrat&     operator=(Bureaucrat&);

        Bureaucrat();
        Bureaucrat(Bureaucrat&);
        ~Bureaucrat();
    private:
        GradeTooHighException   gradeTooHigh;
        GradeTooLowException    gradeTooLow; 
        int grade;
        const   std::string name;

};


#endif