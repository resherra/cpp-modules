#include "Point.hpp"

Fixed   get_area(Point const a, Point const b, Point const c)
{   
    Fixed a_x =  a.get_x() ;
    Fixed a_y =  a.get_y() ;

    Fixed b_x =  b.get_x() ;
    Fixed b_y =  b.get_y() ;

    Fixed c_x =  c.get_x() ;
    Fixed c_y =  c.get_y() ;

    Fixed area((a_x * (b_y - c_y) + b_x * (c_y - a_y) + c_x * (a_y - b_y)) / 2);
    return (area >= 0 ? area : area * -1);
}

bool    bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed area = get_area(a, b, c);
    Fixed a1 = get_area(point, b, c);
    Fixed a2 = get_area(a, point, c);
    Fixed a3 = get_area(a, b, point);

    if ((a1 + a2 + a3) == area)
        return true;
    return false;
}