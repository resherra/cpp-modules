#ifndef FORM_HPP
#define FORM_HPP

class Form;

#include "Bureaucrat.hpp"

std::ostream&   operator<<(std::ostream&, Form&);

class   Form
{
    public:
        std::string getName();
        int         getReqToSign();
        int         getReqToExec();
        bool        isSigned();

        void    beSigned(Bureaucrat&);

        Form&   operator=(Form&);
        Form(std::string, int, int);

        Form();
        Form(Form&);
        ~Form();
    private:
        const   std::string name;        
        const   int req_to_sign;
        const   int req_to_exec;
        bool    is_signed;


        //exceptions
        GradeTooHighException   gradeTooHigh;
        GradeTooLowException    gradeTooLow; 
};

#endif