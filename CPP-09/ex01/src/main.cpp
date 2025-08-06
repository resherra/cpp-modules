#include "../headers/RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Invalid arguments" << std::endl;
        std::exit(1);
    }
    
    RPN exp(av[1]);
    exp.evaluate();
    
    std::cout << exp << std::endl;
}