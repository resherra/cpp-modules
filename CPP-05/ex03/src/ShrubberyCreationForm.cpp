#include "../headers/ShrubberyCreationForm.hpp"

// default constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

// destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other): AForm(other)
{
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
    if (this != &other)
        target = other.target;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{   
    AForm::execute(executor);
    std::ofstream file(target + "_shrubbery");
    file <<  "       /\\\n"
            "      /**\\\n"
            "   *** */****\\\n"
            "    /******\\\n"
            "   /********\\\n"
            "  /**********\\\n"
            " /************\\\n"
            "/**************\\\n"
            "      |||\n"
            "      |||\n"
            "    ~~~~~~~\n";
    file.close();
}
