#include "../headers/AForm.hpp"


const char *NotSignedException::what() const throw()
{
    return "it's not signed";
}

// output operator
std::ostream &operator<<(std::ostream &os, AForm const &form)
{
    os << "-- AForm --" << std::endl;
    os << "name: " + form.getName() << std::endl;
    os << "required grade to sign: " << form.getReqToSign() << std::endl;
    os << "required grade to execute: " << form.getReqToExec() << std::endl;
    os << "is signed: " << (form.isSigned() ? "yes" : "no") << std::endl;

    return os;
}

// default constructor
AForm::AForm() : name("Unknown"), req_to_sign(1), req_to_exec(1), is_signed(false)
{
}

// default destructor
AForm::~AForm()
{
}

// copy constructor
AForm::AForm(AForm &other) : name(other.name), req_to_sign(other.req_to_sign), req_to_exec(other.req_to_exec)
{
    *this = other;
}

// assignment operator
AForm &AForm::operator=(AForm &other)
{
    if (this != &other)
    {
        is_signed = other.is_signed;
    }

    return *this;
}

// other constructors
AForm::AForm(std::string name, int req_to_sign, int req_to_exec) : name(name), req_to_sign(req_to_sign), req_to_exec(req_to_exec), is_signed(false)
{
    if (req_to_sign < 1 || req_to_exec < 1)
        throw gradeTooHigh;
    else if (req_to_sign > 150 || req_to_exec > 150)
        throw gradeTooLow;
}

// getters
std::string AForm::getName() const
{
    return name;
}

int AForm::getReqToSign() const
{
    return req_to_sign;
}

int AForm::getReqToExec() const
{
    return req_to_exec;
}

bool AForm::isSigned() const
{
    return is_signed;
}

// be signed
void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= req_to_sign)
    {
        is_signed = true;
    }
    else
        throw gradeTooLow;
}

//execute
void    AForm::execute(Bureaucrat const &executor) const 
{
    if (!is_signed)
        throw   notSigned;
    if (executor.getGrade() > req_to_exec)
        throw   gradeTooLow;
};
