#ifndef fixed_hpp
#define fixed_hpp

#include <iostream>
#include <cmath>

class Fixed;

std::ostream&   operator<<(std::ostream& os, const Fixed& fixed);
void            print(std::string str);

class Fixed
{
    public:
        //functios
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

        // assignment
        Fixed&  operator=(const Fixed&);

        //comparison
        bool    operator>(const Fixed&)     const;
        bool    operator<(const Fixed&)     const;
        bool    operator>=(const Fixed&)    const;
        bool    operator<=(const Fixed&)    const;
        bool    operator==(const Fixed&)    const;
        bool    operator!=(const Fixed&)    const;

        //arithmetic
        Fixed   operator+(const Fixed&);
        Fixed   operator-(const Fixed&);
        Fixed   operator*(const Fixed&);
        Fixed   operator/(const Fixed&);

        //inc & dec
        // pre
        Fixed  operator++();
        Fixed  operator--();
        // post
        Fixed   operator++(int);
        Fixed   operator--(int);


        //min & max
        static  Fixed&  min(Fixed&, Fixed&);
        static  const   Fixed&  min(const Fixed& , const Fixed&);
        static  Fixed&  max(Fixed&, Fixed&);
        static  const   Fixed&  max(const Fixed&, const Fixed&);

        Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed&);
        ~Fixed();
    private:
        int     raw;
        static  const int n_fractional_bits;
};

#endif