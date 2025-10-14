// 10.k.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "triangle_composition.h"
#include <windows.h>
int main()
{
    SetConsoleOutputCP(1251);
    TriangleComposition triangle(0, 0, 3, 0, 0, 4);

    std::cout << "КОМПОЗИЦИЯ" << std::endl;
    triangle.printSides();
    std::cout << "Периметр: " << triangle.calculatePerimeter() << std::endl;
    std::cout << "Площадь: " << triangle.calculateArea() << std::endl;

    return 0;
}

