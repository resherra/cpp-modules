#include "../headers/utilities.hpp"
#include "../headers/A.hpp"


int main()
{
    Base* rand = generate();

    identify(rand);
    delete rand;

    std::cout << "---------" << "\n";
    
    A   class_A;
    identify(class_A);

    std::cout << "---------" << "\n";

    Base   base;
    identify(base);
}