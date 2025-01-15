#include "Fixed.hpp"
#include <iostream>

const int Fixed::n_fractional_bits = 8;

#define SCALING_FACTOR (1 << Fixed::n_fractional_bits)

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

//arithmetic operators
Fixed   Fixed::operator+(const Fixed& r)
{
    Fixed fixed;

    fixed.setRawBits((*this).raw + r.raw);
    return fixed;
}

Fixed   Fixed::operator-(const Fixed& r)
{
    Fixed fixed;

    fixed.setRawBits((*this).raw - r.raw);
    return fixed;
}

Fixed   Fixed::operator*(const Fixed& r)
{
    Fixed fixed;
    
    fixed.setRawBits(((*this).raw * r.raw) / SCALING_FACTOR);
    return fixed;
}

Fixed   Fixed::operator/(const Fixed& r)
{
    Fixed fixed;

    fixed.setRawBits(((float)(*this).raw / r.raw) * SCALING_FACTOR) ;
    return fixed;
}

//comparison operators
bool    Fixed::operator>(const Fixed& r)    const
{
    return (raw > r.raw);
}

bool    Fixed::operator<(const Fixed& r)    const
{
    return (raw < r.raw);
}

bool    Fixed::operator>=(const Fixed& r)   const
{
    return (raw >= r.raw);
}

bool    Fixed::operator<=(const Fixed& r)   const
{
        return (raw <= r.raw);
}

bool    Fixed::operator==(const Fixed& r)   const
{
        return (raw == r.raw);
}

bool    Fixed::operator!=(const Fixed& r)   const
{
        return (raw != r.raw);
}

//inc & dec operators
Fixed  Fixed::operator++()
{
    ++raw;
    return *this;
}

Fixed  Fixed::operator++(int)
{
    Fixed tmp = *this;
    raw++;
    return tmp;
}

Fixed  Fixed::operator--()
{
    --raw;
    return *this;
}

Fixed  Fixed::operator--(int)
{
    Fixed tmp = *this;
    raw--;
    return tmp;
}


//min & max functions
Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

const   Fixed&  Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    return b;   
}

Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

const   Fixed&  Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;        
    return b;   
}

//default constructor
Fixed::Fixed(): raw(0)
{
    print("Default constructor called");
}

//copy constructor
Fixed::Fixed(const Fixed& fixed)
{
   print("Copy constructor called"); 
    *this = fixed;
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

//get raw bits
int Fixed::getRawBits( void ) const
{
    return raw;
}

//set raw bits
void Fixed::setRawBits( int const raw )
{
    this->raw = raw;
}