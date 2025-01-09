#include "Fixed.hpp" 

Fixed   Fixed::operator+(const Fixed& r)
{
    return Fixed(raw + r.raw);
}

Fixed   Fixed::operator-(const Fixed& r)
{
    return Fixed(raw - r.raw);
}

Fixed   Fixed::operator*(const Fixed& r)
{
    return Fixed(raw / (1 << n_fractional_bits) * (r.raw / (1 << n_fractional_bits)));
}

Fixed   Fixed::operator/(const Fixed& r)
{
    return Fixed((raw / r.raw) * (1 << n_fractional_bits));
}

