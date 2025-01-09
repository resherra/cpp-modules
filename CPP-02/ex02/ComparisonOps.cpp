#include "Fixed.hpp"

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