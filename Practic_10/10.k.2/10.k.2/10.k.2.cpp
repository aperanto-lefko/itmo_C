
//

#include <iostream>
#include "triangle_aggregation.h"
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    Dot point1(0, 0);
    Dot point2(4, 0);
    Dot point3(0, 3);

    TriangleAggregation triangle(&point1, &point2, &point3);

    std::cout << "АГРЕГАЦИЯ" << std::endl;
    triangle.printSides();
    std::cout << "Периметр: " << triangle.calculatePerimeter() << std::endl;
    std::cout << "Площадь: " << triangle.calculateArea() << std::endl;

    return 0;
}


