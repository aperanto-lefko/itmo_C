// 5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int a, b, c;
    int k = 0;                  // счётчик ошибок
    const int n = 10;           // количество примеров
    int mas[n];                 // массив для хранения ответов

    //  вопросы
    for (int i = 0; i < n; i++) {
        a = rand() % 10 + 1;    // случайное число от 1 до 10
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        mas[i] = c;             

        if (c != a * b) {
            k++;
        }
    }

    cout << "\nВсе ответы: ";
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }

    cout << "\nКоличество ошибок: " << k << endl;

    return 0;
}


