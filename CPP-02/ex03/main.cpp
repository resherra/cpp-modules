#include "Point.hpp"

void    print(std::string str)
{
    (void)str;
    // std::cout << str << "\n";
}



int main( void )
{
    Point a(1, 2);
    Point b(4, 6);
    Point c(6, 2);

    Point   point1(3.7, 3.6);
    Point   point2(10.8, 4.4);

    std::cout << (bsp(a, b, c, point1) ? "the point is inside the triangle" : "the point is outside the triangle") << '\n';
    std::cout << (bsp(a, b, c, point2) ? "the point is inside the triangle" : "the point is outside the triangle") << '\n';
    return 0;
}