#include <iostream>
#include <concepts> 
#include <windows.h>

template<typename T>
concept Comparable = requires(T a, T b) {
    { a < b } -> std::convertible_to<bool>;
};


template<Comparable T>
const T& maxOfTwo(const T& a, const T& b) {
    return (a < b) ? b : a;
}
class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

    bool operator<(const Point& other) const {
        return (x * x + y * y) < (other.x * other.x + other.y * other.y);
    }

    
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        return os << "(" << p.x << ", " << p.y << ")";
    }
};

int main() {
    
    SetConsoleOutputCP(1251);
    std::cout << "\n1. Тип int:" << std::endl;
    int a = 5, b = 10;
    std::cout << "maxOfTwo(" << a << ", " << b << ") = " << maxOfTwo(a, b) << std::endl;

    std::cout << "\n2. Тип double:" << std::endl;
    double x = 3.14, y = 2.71;
    std::cout << "maxOfTwo(" << x << ", " << y << ") = " << maxOfTwo(x, y) << std::endl;

    std::cout << "\n3. Пользовательский класс Point:" << std::endl;
    Point p1(1, 1);   
    Point p2(2, 0);   
    std::cout << "maxOfTwo" << p1 << ", " << p2 << ") = " << maxOfTwo(p1, p2) << std::endl;
    std::cout << "Объяснение: сравнивается по расстоянию от (0,0)" << std::endl;

   

    return 0;
}