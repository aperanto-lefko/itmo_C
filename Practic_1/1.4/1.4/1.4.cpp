// 1.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>  
#include <cmath>    
#include <windows.h>
int main() {
	SetConsoleOutputCP(1251);
    double P; 
    std::cout << "Введите периметр равностороннего треугольника: ";
    std::cin >> P;

    double a = P / 3.0;
    double b = a;
    double c = a;

    double p = P / 2.0; 

    double S = std::sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "Сторона    Площадь\n";
    std::cout << a << "       " << S << "\n";

    return 0;
}

