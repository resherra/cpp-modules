#include "Bureaucrat.hpp"



const char *GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

// default constrcutor
Bureaucrat::Bureaucrat() : grade(150), name("incognito")
{
}

// copy constructor
Bureaucrat::Bureaucrat(Bureaucrat &other) : name(other.name)
{
    *this = other;
}

// assignment operator
Bureaucrat &Bureaucrat::operator=(Bureaucrat &other)
{
    if (this != &other)
    {
        grade = other.grade;
    }
    return *this;
}

// default destructor
Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade > 150)
        throw gradeTooLow;
    else if (grade < 1)
        throw gradeTooHigh;
    this->grade = grade;
}

// get name
std::string Bureaucrat::getName() const
{
    return name;
}

// get grade
int Bureaucrat::getGrade() const
{
    return grade;
}

// increment grade
void Bureaucrat::incrementGrade()
{
    if (--grade < 1)
        throw gradeTooHigh;
}

// decrement grade
void Bureaucrat::decrementGrade()
{
    if (++grade > 150)
        throw gradeTooLow;
}

// insersion operator
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    os << '\n';
    return os;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << name + " signed the form below: " << "\n";
        std::cout << form;
    }
    catch (const std::exception &e)
    {
        std::cerr << name + " couldn't sign the form bellow because their " << e.what() << "\n";
        std::cerr << form;
    }
}