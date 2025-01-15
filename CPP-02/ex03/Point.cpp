#include "Point.hpp"

const Fixed&   Point::get_x() const
{
    return x;
}

const Fixed&    Point::get_y() const
{
    return y;
}

//copy assignment operator
Point&  Point::operator=(const Point& point)
{   
    x = point.x;
    y = point.y;
    return *this;
}

//copy constructor
Point::Point(const Point& point)
{
    *this = point;
}

// floating point constructor
Point::Point(const float fx, const float fy): x(fx), y(fy)
{
}

// default constructor
Point::Point()
{
}

//destructor
Point::~Point()
{
}