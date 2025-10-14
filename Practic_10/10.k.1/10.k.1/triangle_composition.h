#ifndef TRIANGLE_COMPOSITION_H
#define TRIANGLE_COMPOSITION_H

#include "dot.h"

class TriangleComposition
{
private:
    Dot dot1, dot2, dot3;

public:
    TriangleComposition(double x1, double y1, double x2, double y2, double x3, double y3);
    void printSides() const;
    double calculatePerimeter() const;
    double calculateArea() const;
};

#endif