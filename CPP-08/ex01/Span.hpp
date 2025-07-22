#ifndef span_hpp
#define span_hpp

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        std::vector<unsigned int> numbers;
        unsigned int size;
        unsigned int i;

    public:
        Span(); 
        Span(unsigned int);
        Span(const Span&);
        Span&   operator=(const Span&);   

        void            addNumber(unsigned  int);
        template <typename T>
        void            addNumber(T begin, T end)
        {
            while (begin != end)
            {
                addNumber(*(begin++));
            }   
        }

        unsigned int    shortestSpan();
        unsigned int    longestSpan();


        class SpanException: public std::runtime_error {
            public:
                SpanException(const std::string&);
        };

        ~Span();
};



#endif