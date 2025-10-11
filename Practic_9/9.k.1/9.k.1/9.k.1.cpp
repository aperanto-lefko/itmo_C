#include <iostream>
#include <cmath>
#include <stdexcept>
#include <windows.h>
class Triangle {
private:
    double sideA, sideB, sideC;

    bool isValidTriangle(double a, double b, double c) {
        return (a > 0 && b > 0 && c > 0) &&
            (a + b > c) &&
            (a + c > b) &&
            (b + c > a);
    }

public:
   
    Triangle(double a, double b, double c) {
        if (!isValidTriangle(a, b, c)) {
            throw std::invalid_argument("Недопустимые стороны треугольника");
        }
        sideA = a;
        sideB = b;
        sideC = c;
    }

    
    double getSideA() const { return sideA; }
    double getSideB() const { return sideB; }
    double getSideC() const { return sideC; }

    double calculateArea() const {
        double p = (sideA + sideB + sideC) / 2.0;
        return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
    }

    void printInfo() const {
        std::cout << "Треугольник со сторонами: "
            << sideA << ", " << sideB << ", " << sideC
            << "\nПлощадь: " << calculateArea() << std::endl;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    double a, b, c;

    std::cout << "Введите три стороны треугольника:" << std::endl;
    std::cout << "Сторона a: ";
    std::cin >> a;
    std::cout << "Сторона b: ";
    std::cin >> b;
    std::cout << "Сторона c: ";
    std::cin >> c;

    try {
        Triangle triangle(a, b, c);
        triangle.printInfo();
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
