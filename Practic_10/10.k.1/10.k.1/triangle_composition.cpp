#include "triangle_composition.h"
#include <iostream>
#include <cmath>

TriangleComposition::TriangleComposition(double x1, double y1, double x2, double y2, double x3, double y3)
    : dot1(x1, y1), dot2(x2, y2), dot3(x3, y3) {}

void TriangleComposition::printSides() const
{
    double a = dot2.distanceTo(dot3);
    double b = dot1.distanceTo(dot3);
    double c = dot1.distanceTo(dot2);

    std::cout << "Сторона A: " << a << std::endl;
    std::cout << "Сторона B: " << b << std::endl;
    std::cout << "Сторона C: " << c << std::endl;
}

double TriangleComposition::calculatePerimeter() const
{
    return dot2.distanceTo(dot3) + dot1.distanceTo(dot3) + dot1.distanceTo(dot2);
}

double TriangleComposition::calculateArea() const
{
    double a = dot2.distanceTo(dot3);
    double b = dot1.distanceTo(dot3);
    double c = dot1.distanceTo(dot2);
    double p = (a + b + c) / 2;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}