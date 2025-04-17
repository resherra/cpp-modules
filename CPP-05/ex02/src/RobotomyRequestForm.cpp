#include "../headers/RobotomyRequestForm.hpp"

// default constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), flag(false)
{
}

// destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) : AForm(other), flag(false)
{
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
    if (this != &other)
    {
        target = other.target;
        flag = other.flag;
    }
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target), flag(false)
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    AForm::execute(executor);
    std::cout << "some drilling noises ~~~~" << std::endl;

    flag = !flag;

    if (flag)
        std::cout << target << " has been robotomized successfully;";
    else
        std::cout << "the robotomy failed.";

    std::cout << std::endl;
}


