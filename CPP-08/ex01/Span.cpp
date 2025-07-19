#include "Span.hpp"


Span::Span(): size(0), i(0) {}

Span::Span(unsigned int n): size(n), i(0) {}

Span::Span(const Span& other)
{
    *this = other;
}

Span&   Span::operator=(const Span&   other)
{
    if (this != &other)
    {   
        numbers = other.numbers;
        size = other.size;
        i = other.i;
    }

    return *this;
}   

void    Span::addNumber(unsigned int n)
{
    if (i < size)
    {
        numbers.push_back(n);
        i++;
    }
    else 
        throw std::string("Array is full");
}

unsigned int Span::shortestSpan()
{
    if (!i || i == 1)
        throw std::string("There's not enough numbers");



    std::sort(numbers.begin(), numbers.end());

    unsigned int min_val = numbers[1] - numbers[0];
    unsigned int tmp = 0;
    for (std::vector<unsigned int>::iterator it = numbers.begin(); it != numbers.end() - 1; ++it)
    {
        tmp = *(it + 1) - *it;
        if (tmp < min_val)
            min_val = tmp; 
    }
    return min_val;
}

unsigned int Span::longestSpan()
{
    if (!i || i == 1)
        throw std::string("There's not enough numbers");

    unsigned int max_elem = *std::max_element(numbers.begin(), numbers.end());
    unsigned int min_elem = *std::min_element(numbers.begin(), numbers.end());

    return max_elem - min_elem;
}

Span::~Span(){}
