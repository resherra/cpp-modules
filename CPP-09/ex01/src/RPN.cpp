#include "../headers/RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN& other): expression(other.expression), s(other.s) {}

RPN&    RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        expression = other.expression;
        s = other.s;
    }
    return *this;
}

RPN::RPN(std::string arg): expression(arg) 
{
    sanitize();
}

std::ostream &operator<<(std::ostream &os, RPN &rpn)
{
    if (rpn.s.empty())
        return os;
    os << rpn.s.top();
    return os;
}

static int is_sign(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return c;
    return 0;
}

void RPN::sanitize()
{
    expression.erase(remove_if(expression.begin(), expression.end(), isspace), expression.end());
    int operands = 0;
    int operators = 0;

    for (std::string::iterator it = expression.begin(); it != expression.end(); ++it)
    {
        char c = *it;
        int isd = std::isdigit(c);
        int iss = is_sign(c);
        if (isd)
            operands++;
        else if (iss)
            operators++;
        if (!isd && !iss)
        {
            std::cerr << "Error" << std::endl;
            std::exit(1);
        }
    }

    if (operators != operands - 1)
    {
        std::cerr << "Invalid RPN expression" << std::endl;
        std::exit(1);
    }
}

void    RPN::evaluate()
{
    for (std::string::iterator it = expression.begin(); it != expression.end(); ++it)
    {
        char c = *it;

        int sign = is_sign(c);
        if (!sign)
        {
            s.push(c - '0');
        } else
        {
            if (s.size() < 2)
            {
                std::cerr << "Invalid RPN expression" << std::endl;
                std::exit(1);
            }
            std::pair<int, int> pa;
            pa.second = s.top();
            s.pop();
            pa.first = s.top();
            s.pop();
            int res;
            if (sign == '+')
                res = pa.first + pa.second;
            else if (sign == '-')
                res = pa.first - pa.second;
            else if (sign == '*')
                res = pa.first * pa.second;
            else if (sign == '/')
            {
                if (pa.second == 0)
                    throw std::runtime_error("Error: Can't divide by 0.");
                res = pa.first / pa.second;
            }
            s.push(res);
        }
    }
}

RPN::~RPN()
{
}


