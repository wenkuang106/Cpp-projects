#include "calculator.h"
#include <iostream>

double circle(double radius)
{
    std::cout << 3.14 * pow(radius, 2.0) << '\n'; //pow() is the exponential function where radius is raised to the 2nd power 
    return 0;
}

double triangle(double base, double height)
{
    std::cout << (height * base) / 2 << '\n';
    return 0;
}

double square(double length)
{
    std::cout << pow(length, 2.0) << '\n';
    return 0;
}

double trapezoid(double basea, double baseb, double height)
{
    std::cout << ((basea + baseb) / 2) * height << '\n';
    return 0;
}
