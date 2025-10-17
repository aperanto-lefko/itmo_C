#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <windows.h>

class Point {
private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0) : x(x), y(y) {}

    // расчет расстояния до центра координат
    double distanceToOrigin() const {
        return std::sqrt(x * x + y * y);
    }

    // Перегрузка  < для сравнения по расстоянию до центра
    bool operator<(const Point& other) const {
        return distanceToOrigin() < other.distanceToOrigin();
    }

    // Перегрузка <<
    friend std::ostream& operator<<(std::ostream& os, const Point& point) {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }
};

int main()

{
    SetConsoleOutputCP(1251);
    std::vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));

    std::sort(v.begin(), v.end()); 

    for (auto& point : v)
        std::cout << point << " -> distance: " << point.distanceToOrigin() << '\n';

    return 0;
}
