#include "Span.hpp"


Span::SpanException::SpanException(const std::string& what): std::runtime_error(what) {};

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
        throw SpanException("Span is full");
}

unsigned int Span::shortestSpan()
{
    if (!i || i == 1)
        throw SpanException("Not enough elements!");



    std::sort(numbers.begin(), numbers.end());

    unsigned int min_val = numbers[1] - numbers[0];
    unsigned int tmp = 0;

    for (unsigned int i = 0; i < numbers.size() - 1; i++)
    {
        tmp = numbers[i + 1] - numbers[i];
        if (tmp < min_val)
            min_val = tmp;
    }
    return min_val;
}

unsigned int Span::longestSpan()
{
    if (!i || i == 1)
            throw SpanException("Not enough elements!");

    unsigned int max_elem = *std::max_element(numbers.begin(), numbers.end());
    unsigned int min_elem = *std::min_element(numbers.begin(), numbers.end());

    return max_elem - min_elem;
}

Span::~Span(){}
