#include "../headers/ScalarConverter.hpp"

static int is_number(char c)
{
    return (c >= '0' && c <= '9');     
}

static int is_char(std::string str)
{
    return (str.length() == 1 &&  is_number(str[0]) == 0);
}

static int is_int(std::string  str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (is_number(str[i]) == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

static int is_float(std::string str)
{
    int i = 0;
    int str_length = str.length();
    int flag = 0;

    if (str[str_length - 1] != 'f')
        return 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] && i < str_length - 1)
    {
        if (is_number(str[i]) || str[i] == '.')
        {
            if (str[i] == '.')
                flag++;        
        }
        else
            return 0;
        i++;
    }
    if (flag > 1)
        return 0;
    return 1;
}

static int is_double(std::string  str)
{
    int i = 0;
    int flag = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (is_number(str[i]) || str[i] == '.')
        {
            if (str[i] == '.')
                flag++;
        }
        else
            return 0;
        i++;
    }
    if (flag > 1)
        return 0;
    return 1;
}

static int is_nan(std::string str)
{
    return (str == "nan" || str == "nanf");
}

static int is_inf(std::string  str)
{
    return (str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff");
}


Types get_type(std::string str)
{
    if (is_char(str))
        return CHAR;
    else if (is_int(str))
        return INT;
    else if (is_float(str))
        return FLOAT;
    else if (is_double(str))
        return DOUBLE;
    else if (is_nan(str))
        return NAN;
    else if (is_inf(str))
        return INF;
    return UNDEFINED;
}
