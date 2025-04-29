#include "../headers/A.hpp"
#include "../headers/B.hpp"
#include "../headers/C.hpp"
#include "../headers/utilities.hpp"

Base * generate(void)
{
    std::srand(std::time(NULL)); 
    int ranval = std::rand() % 3;

    if (ranval == 0)
        return new A;
    else if (ranval == 1)
        return new B;
    return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}


void identify(Base& p)
{
    try
    {
        try
        {
            (void)dynamic_cast<A &>(p);
            std::cout << "A" << "\n";
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<B &>(p);
                std::cout << "B" << "\n";
            }
            catch (const std::exception &e)
            {
                try
                {
                    (void)dynamic_cast<C &>(p);
                    std::cout << "C" << "\n";
                }
                catch (const std::exception &e)
                {
                    throw;
                }
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "can't cast: " <<  e.what() << '\n';
    }
}