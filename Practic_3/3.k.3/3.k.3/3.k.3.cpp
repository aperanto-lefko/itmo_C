// 3.k.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

// Функция для расчета площади равностороннего треугольника
double calculateArea(double side) {
    return (sqrt(3) / 4) * side * side;
}

// Функция для расчета площади разностороннего треугольника по формуле Герона
double calculateArea(double a, double b, double c) {
    double p = (a + b + c) / 2; // полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    SetConsoleOutputCP(1251);
    int choice;

    cout << "Выберите тип треугольника:" << endl;
    cout << "1 - Равносторонний" << endl;
    cout << "2 - Разносторонний" << endl;
    cout << "Ваш выбор: ";
    cin >> choice;

    if (choice == 1) {
        double side;
        cout << "Введите длину стороны равностороннего треугольника: ";
        cin >> side;

        if (side <= 0) {
            cout << "Ошибка: сторона должна быть положительным числом!" << endl;
           
        }

        double area = calculateArea(side);
        cout << fixed << setprecision(2);
        cout << "Площадь равностороннего треугольника: " << area << endl;

    }
    else if (choice == 2) {
        double a, b, c;
        cout << "Введите три стороны разностороннего треугольника:" << endl;
        cout << "Сторона a: ";
        cin >> a;
        cout << "Сторона b: ";
        cin >> b;
        cout << "Сторона c: ";
        cin >> c;

        if (a <= 0 || b <= 0 || c <= 0) {
            cout << "Все стороны должны быть положительными числами!" << endl;
          
        }

        if (a + b <= c || a + c <= b || b + c <= a) {
            cout << "Треугольник с такими сторонами не существует" << endl;
           
        }

        double area = calculateArea(a, b, c);
        cout << fixed << setprecision(2);
        cout << "Площадь разностороннего треугольника: " << area << endl;

    }
    else {
        cout << "Ошибка: неверный выбор!" << endl;
       
    }

    return 0;
}


