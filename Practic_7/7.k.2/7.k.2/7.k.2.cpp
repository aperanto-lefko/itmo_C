#include <iostream>
#include <cmath>
using namespace std;
#include <windows.h>

struct Equation {
    double x1;
    double x2;
};


Equation solveQuadratic(double a, double b, double c) {
    Equation sol;
    double D = b * b - 4 * a * c; 

    if (D < 0) {
       
        sol.x1 = 0;
        sol.x2 = 0;
    }
    else if (D == 0) {
     
        sol.x1 = sol.x2 = -b / (2 * a);
    }
    else {
        
        sol.x1 = (-b + sqrt(D)) / (2 * a);
        sol.x2 = (-b - sqrt(D)) / (2 * a);
    }
    return sol;
}

int main() {
    SetConsoleOutputCP(1251);
    double a, b, c;
    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;
     

    Equation res = solveQuadratic(a, b, c);

    cout << "Корни уравнения: x1 = " << res.x1 << ", x2 = " << res.x2 << endl;

    return 0;
}