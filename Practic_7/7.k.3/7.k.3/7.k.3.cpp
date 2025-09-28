#include <iostream>
#include <cmath>
#include <tuple> 
using namespace std;
#include <windows.h>
tuple<double, double, bool> solveQuadratic(double a, double b, double c) {
    double x1 = 0, x2 = 0;
    bool hasRoots = true;

    if (a == 0) {
        hasRoots = false; 
    }
    else {
        double D = b * b - 4 * a * c;
        if (D < 0) {
            hasRoots = false; 
        }
        else if (D == 0) {
            x1 = x2 = -b / (2 * a);
        }
        else {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
        }
    }
    return make_tuple(x1, x2, hasRoots);
}

int main() {
    SetConsoleOutputCP(1251);
    double a, b, c;
    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;

    auto result = solveQuadratic(a, b, c);

    double x1 = get<0>(result);
    double x2 = get<1>(result);
    bool hasRoots = get<2>(result);

    if (!hasRoots) {
        cout << "Корней нет." << endl;
    }
    else {
        cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    return 0;
}