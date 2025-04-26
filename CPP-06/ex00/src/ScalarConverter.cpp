#include "../headers/ScalarConverter.hpp"

enum    Types
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    OTHERS,
    UNDEFINED
};

int is_number(char c)
{
    return (c >= '0' && c <= '9');     
}

int is_char(std::string str)
{
    return (str.length() == 1 &&  is_number(str[0]) == 0);
}

int is_int(std::string  str)
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

int is_float(std::string str)
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

int is_double(std::string  str)
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

Types   get_type(std::string str)
{
    if (is_char(str))
        return CHAR;
    else if (is_int(str))
        return INT;
    else    if (is_float(str))
        return FLOAT;
    else if (is_double(str))
        return DOUBLE;
    return UNDEFINED;
}

int is_printable(int value)
{
    return (value >= 32 && value <= 126);
}

void    convert_char(std::string str, Types type)
{
    std::cout << "char: ";

    int value = std::atoi(str.c_str());
    if (type == INT || type == FLOAT || type == DOUBLE)
    {
        if (is_printable(value))
            std::cout << static_cast<char>(value);
        else
            std::cout << "Non displayable";
    }
    else if (type == OTHERS)
    {
        //others
    }
    else
        std::cout << str[0];
    std::cout << std::endl;
}

void    convert_int(std::string str, Types type)
{
    std::cout << "int: ";
    if (type == CHAR)
        std::cout << static_cast<int>(str[0]);
    else if (type == FLOAT || type == DOUBLE)
        std::cout << static_cast<int>(std::atof(str.c_str()));
    else if (type == OTHERS)
    {
        //others
    }
    else
        std::cout << std::atoi(str.c_str());
    std::cout << std::endl;
}

void    convert_float(std::string   str, Types  type)
{
    std::cout << "float: ";
    if (type == CHAR)
        std::cout << static_cast<int>(str[0]) << ".0f";
    else if (type == INT)
        std::cout << std::atoi(str.c_str()) << ".0f";
    else if (type == OTHERS)
    {
        //others
    }
    else
        std::cout << std::fixed << std::setprecision(1) << std::atof(str.c_str()) << "f";
    std::cout << std::endl;
}

void    convert_double(std::string  str, Types type)
{
    std::cout << "double: ";
    if (type == CHAR)
        std::cout << static_cast<int>(str[0]) << ".0";
    else if (type == INT)
        std::cout << std::atoi(str.c_str()) << ".0";
    else if (type == OTHERS)
    {
        // others
    }
    else
        std::cout << std::atof(str.c_str());
    std::cout << std::endl;
}

void    ScalarConverter::convert(char* str)
{
    Types   type = get_type(str);

    convert_char(str, type);
    convert_int(str, type);
    convert_float(str, type);
    convert_double(str, type);
}

ScalarConverter::ScalarConverter()
{
    std::cout << "testing constructor" << std::endl;
}