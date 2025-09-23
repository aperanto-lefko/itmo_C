// 3.k.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;


double cubeRootStd(double a) {
    return pow(a, 1.0 / 3);
}


double cubeRootIter(double a, int iterations = 20) {
    double x = a; // начальное приближение
    for (int i = 0; i < iterations; i++) {
        x = (1.0 / 3) * (a / (x * x) + 2 * x);
    }
    return x;
}

int main() {
    double a;
    cout << "Введите число: ";
    cin >> a;

    cout << "Кубический корень (pow): " << cubeRootStd(a) << endl;
    cout << "Кубический корень (итерации): " << cubeRootIter(a) << endl;

    return 0;
}
