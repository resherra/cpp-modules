#ifndef rpn_
#define rpn_

#include <iostream>
#include <string>
#include <stack>

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

        int     getTop();
        void    evaluate();

        RPN &operator=(const RPN &);

        ~RPN();
};

std::ostream& operator<<(std::ostream&,  RPN&);

#endif



