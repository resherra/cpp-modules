#include "Form.hpp"

int main()
{
    try
    {
        Form insurance("Insurance", 150, 150);

        try
        {
            Bureaucrat manager("jack", 1);
            std::cout << manager;
            manager.signForm(insurance);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << " to be assigned to such bureuacrat" << '\n';
        }
        

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << " for signing and/or excuting" << '\n';
    }

    std::cout << std::endl;

    Bureaucrat cashier("joe", 100);
    Form loan("loan", 1, 1);

    std::cout << cashier;
    cashier.signForm(loan);
}