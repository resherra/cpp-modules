#include "Point.hpp"

void    print(std::string str)
{
    (void)str;
    // std::cout << str << "\n";
}



int main( void )
{
    Point a(1.25, 1.75);
    Point b(4.25, 5.75);
    Point c(6.25, 1.75);

    Point   point1(3.25, 3.75); //inside
    Point   point2(2.25, 2.75); //inside
    Point   point3(5.25, 4.75); //outside

    std::cout << (bsp(a, b, c, point1) ? "the point is inside the triangle" : "the point is outside the triangle") << '\n';
    std::cout << (bsp(a, b, c, point2) ? "the point is inside the triangle" : "the point is outside the triangle") << '\n';
    std::cout << (bsp(a, b, c, point3) ? "the point is inside the triangle" : "the point is outside the triangle") << '\n';
    return 0;
}