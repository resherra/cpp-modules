#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat manager("jack", 1);
        Form insurance("Insurance", 50, 50);

        std::cout << manager;
        manager.signForm(insurance);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << " to be assigned to such bureuacrat" << '\n';
    }

    std::cout << std::endl;

    Bureaucrat cashier("joe", 100);
    Form loan("loan", 1, 1);

    std::cout << cashier;
    cashier.signForm(loan);
}