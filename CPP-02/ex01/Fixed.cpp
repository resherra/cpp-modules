#include "Fixed.hpp"
#include <iostream>

const int Fixed::n_fractional_bits = 8;

void    print(std::string str)
{
    std::cout << str << "\n";
}

//insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}   

//copy assignment operator
Fixed&  Fixed::operator=(const Fixed& fixed)
{    
    print("Copy assignment operator called");
    raw = fixed.raw;
    return *this;
}

//default constructor
Fixed::Fixed()
{
    print("Default constructor called");
}

//copy constructor
Fixed::Fixed(const Fixed& fixed)
{

   print("Copy constructor called"); 
    *this = fixed;
}

//destructor
Fixed::~Fixed()
{
    print("Destructor called");
}

//to float
float Fixed::toFloat( void ) const
{
    return (float)raw / (1 << n_fractional_bits);  
}

//to int
int Fixed::toInt(void)  const
{
    return raw >> n_fractional_bits;
}

//int constructor
Fixed::Fixed(const int integer)
{
    print("Int constructor called");
    raw = integer << n_fractional_bits;
}

//float constructor
Fixed::Fixed (const float FloatNum)
{
    print("Float constructor called");
    raw = roundf(FloatNum * (1 << n_fractional_bits));
}

int Fixed::getRawBits( void ) const
{
    return raw;
}

void Fixed::setRawBits( int const raw )
{
    this->raw = raw;
}