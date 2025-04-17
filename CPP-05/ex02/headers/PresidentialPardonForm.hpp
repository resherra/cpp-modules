#ifndef PPF_hpp
#define PPF_hpp

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm(std::string);

    PresidentialPardonForm &operator=(PresidentialPardonForm &);

    PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm &);
    ~PresidentialPardonForm();

    void execute(Bureaucrat const &executor) const;

private:
    std::string target;
};

#endif