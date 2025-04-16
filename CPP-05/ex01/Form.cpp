#include "Form.hpp"

static void print(std::string message)
{
    (void)message;
    // std::cout << message << std::endl;
}

// output operator
std::ostream &operator<<(std::ostream &os, Form &form)
{
    os << "-- Form --" << std::endl;
    os << "name: " + form.getName() << std::endl;
    os << "required grade to sign: " << form.getReqToSign() << std::endl;
    os << "required grade to execute: " << form.getReqToExec() << std::endl;
    os << "is signed: " << (form.isSigned() ? "yes" : "no") << std::endl;

    return os;
}

// default constructor
Form::Form() : name("Unknown"), req_to_sign(1), req_to_exec(1), is_signed(false)
{
    print("Form default constructor");
}

// default destructor
Form::~Form()
{
    print("Form default destructor");
}

// copy constructor
Form::Form(Form &other) : name(other.name), req_to_sign(other.req_to_sign), req_to_exec(other.req_to_exec)
{
    print("Form copy constructor");
    *this = other;
}

// assignment operator
Form &Form::operator=(Form &other)
{
    if (this != &other)
    {
        is_signed = other.is_signed;
    }

    return *this;
}

// other constructors
Form::Form(std::string name, int req_to_sign, int req_to_exec) : name(name), req_to_sign(req_to_sign), req_to_exec(req_to_exec), is_signed(false)
{
    if (req_to_sign < 1 || req_to_exec < 1)
        throw gradeTooHigh;
    else if (req_to_sign > 150 || req_to_exec > 150)
        throw gradeTooLow;
    print("infos constructor");
}

// getters
std::string Form::getName()
{
    return name;
}

int Form::getReqToSign()
{
    return req_to_sign;
}

int Form::getReqToExec()
{
    return req_to_exec;
}

bool Form::isSigned()
{
    return is_signed;
}

// be signed
void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= req_to_sign)
    {
        is_signed = true;
    }
    else
        throw gradeTooLow;
}