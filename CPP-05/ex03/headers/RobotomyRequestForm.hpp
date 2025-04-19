#ifndef RQF_hpp
#define RQF_hpp

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm(std::string);

    RobotomyRequestForm &operator=(RobotomyRequestForm &);

    RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm &);
    ~RobotomyRequestForm();

    void execute(Bureaucrat const &executor) const;

private:
    std::string target;
    mutable bool    flag;
};

#endif