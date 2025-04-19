#ifndef SCF_hpp
#define SCF_hpp

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(std::string);

        ShrubberyCreationForm &operator=(ShrubberyCreationForm &);

        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm &);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const &executor) const;
    private:
        std::string target;
};

#endif