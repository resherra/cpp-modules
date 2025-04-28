#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>

enum    Types
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INF,
    NAN,
    UNDEFINED
};

class   ScalarConverter
{   
    public:
        static  void    convert(char*);
    private:
        ScalarConverter();
};

Types   get_type(std::string str);
void    convert_char(std::string, Types);
void    convert_int(std::string, Types);
void    convert_float(std::string, Types);
void    convert_double(std::string, Types);

#endif