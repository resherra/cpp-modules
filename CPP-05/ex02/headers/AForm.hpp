#ifndef A_FORM_HPP
#define A_FORM_HPP

class AForm;

#include "Bureaucrat.hpp"

class NotSignedException : public std::exception
{
public:
    const char *what() const throw();
};

std::ostream &operator<<(std::ostream &, AForm const &);

class AForm
{
public:
    virtual std::string getName() const;
    int getReqToSign() const;
    int getReqToExec() const;
    bool isSigned() const;

    virtual void execute(Bureaucrat const &executor) const = 0;
    void beSigned(Bureaucrat &);

    AForm &operator=(AForm &);
    AForm(std::string, int, int);

    AForm();
    AForm(AForm &);
    ~AForm();

private:
    const std::string name;
    const int req_to_sign;
    const int req_to_exec;
    bool is_signed;

    // exceptions
    GradeTooHighException gradeTooHigh;
    GradeTooLowException gradeTooLow;
    NotSignedException   notSigned;
};

#endif