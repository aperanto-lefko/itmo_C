#include "triangle_aggregation.h"
#include <iostream>
#include <cmath>

TriangleAggregation::TriangleAggregation(const Dot* d1, const Dot* d2, const Dot* d3)
    : dot1(d1), dot2(d2), dot3(d3) {}

void TriangleAggregation::printSides() const
{
    double a = dot2->distanceTo(*dot3);
    double b = dot1->distanceTo(*dot3);
    double c = dot1->distanceTo(*dot2);

    std::cout << "Сторона A: " << a << std::endl;
    std::cout << "Сторона B: " << b << std::endl;
    std::cout << "Сторона C: " << c << std::endl;
}

double TriangleAggregation::calculatePerimeter() const
{
    return dot2->distanceTo(*dot3) + dot1->distanceTo(*dot3) + dot1->distanceTo(*dot2);
}

double TriangleAggregation::calculateArea() const
{
    double a = dot2->distanceTo(*dot3);
    double b = dot1->distanceTo(*dot3);
    double c = dot1->distanceTo(*dot2);
    double p = (a + b + c) / 2;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}