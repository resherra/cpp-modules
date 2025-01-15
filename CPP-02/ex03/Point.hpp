#ifndef point_hpp
#define point_hpp

#include "Fixed.hpp"

class Point 
{
    public:
        Point&  operator=(const Point&);
        const Fixed&     get_x() const;
        const Fixed&     get_y() const;

        Point();
        Point(const float, const float);
        Point(const Point&);
        ~Point();
    private:
        Fixed x;
        Fixed y;        
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif