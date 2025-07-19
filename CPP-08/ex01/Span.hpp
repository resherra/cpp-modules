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
        unsigned int    shortestSpan();
        unsigned int    longestSpan();

        ~Span();
};



#endif