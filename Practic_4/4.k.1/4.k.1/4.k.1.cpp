// 4.k.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <cmath>
using namespace std;
#include <windows.h>

int Myroot(double a, double b, double c, double& x1, double& x2) {
   

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        return -1;
    }
    else if (discriminant == 0) {
        x1 = x2 = -b / (2 * a);  
        return 0;
    }
    else {
        x1 = (-b + sqrt(discriminant)) / (2 * a);  
        x2 = (-b - sqrt(discriminant)) / (2 * a);  
        return 1;
    }
}

int main() {
    SetConsoleOutputCP(1251);
    double a, b, c;
    double root1, root2;  

    cout << "Введите a, b, c: ";
    cin >> a >> b >> c;

    int result = Myroot(a, b, c, root1, root2);

      switch (result) {
    case 1:
        cout << "x1 = " << root1 << ", x2 = " << root2 << endl;
        break;
    case 0:
        cout << "x1 = x2 = " << root1 << endl;  
        break;
    case -1:
        cout << "Корней нет" << endl;
        break;
    }

    return 0;
}