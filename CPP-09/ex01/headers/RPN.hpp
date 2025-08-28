#ifndef rpn_
#define rpn_

#include <iostream>
#include <string>
#include <stack>
#include <exception>

class RPN
{
    private:
        std::string expression;
        std::stack<int>  s;

        void    sanitize();
    public:
        RPN();
        RPN(const RPN&);
        RPN(std::string);

        void    evaluate();

        RPN &operator=(const RPN &);

        friend std::ostream& operator<<(std::ostream&,  RPN&);
        
        ~RPN();
};


#endif



