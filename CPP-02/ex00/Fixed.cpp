#include "Fixed.hpp"
#include <iostream>

const int Fixed::n_fractional_bits = 8;

//constructor
Fixed::Fixed(): num(0)
{
    std::cout << "Default constructor called" << "\n";
}

//copy constructor
Fixed::Fixed(Fixed fixed)
{
    std::cout << "Copy constructor called" << "\n";
    *this = fixed;
}

//copy assignment operator
Fixed&  Fixed::operator=(Fixed& fixed)
{
    std::cout << "Copy assignment operator called" << "\n"; 
    num = fixed.getRawBits();
    return *this;
}

//destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << '\n';
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << "\n";
    return num;
}

void Fixed::setRawBits( int const raw )
{
    num = raw;
}
