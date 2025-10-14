#include "dot.h"
#include <cmath>

Dot::Dot() : x(0), y(0) {}

Dot::Dot(double x, double y) : x(x), y(y) {}

double Dot::distanceTo(Dot point) const
{
    return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
}