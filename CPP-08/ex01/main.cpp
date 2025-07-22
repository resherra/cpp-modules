#include "Span.hpp"
#include <ctime>
#include <list>

int main()
{
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    // {
    //     Span bigSp = Span(100);
    //     std::list<int> numbers;
        
    //     std::srand(std::time(NULL));
    //     for (int i = 0; i < 100; i++)
    //     {
    //         numbers.push_back(std::rand());
    //     }

    //     std::cout << "max element:" << *std::max_element(numbers.begin(), numbers.end()) << std::endl;
    //     std::cout << "min element:" << *std::min_element(numbers.begin(), numbers.end()) << std::endl;
    //     std::cout << "----" << std::endl;
    //     try
    //     {
    //         bigSp.addNumber(numbers.begin(), numbers.end());
    //         std::cout << "Shortest span: " << bigSp.shortestSpan() << std::endl;
    //         std::cout << "Longest span: " << bigSp.longestSpan() << std::endl;
    //     }
    //     catch (const std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
    //     }
    // }

    // {
    //     Span empty = Span(5);
    //     try
    //     {
    //         empty.shortestSpan();
    //     }
    //     catch (const std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
    //     }

    //     Span full(2);
    //     try
    //     {
    //         full.addNumber(1);
    //         full.addNumber(2);
    //         full.addNumber(3);
    //     }
    //     catch (const std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
        // }
    // }
}