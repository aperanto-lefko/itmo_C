// 5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
#include <windows.h>
int main() {
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int a, b, c;
    int k = 0;                  // счётчик ошибок
    const int n = 10;           // количество примеров
    int mas[n];                 // массив для хранения всех ответов

    vector<int> v1;             // правильные ответы
    vector<int> v2;             // неправильные ответы

    // цикл вопросов
    for (int i = 0; i < n; i++) {
        a = rand() % 10 + 1;    // случайные числа от 1 до 10
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        mas[i] = c;             

        if (a * b != c) {       
            v2.push_back(c);    
            k++;
        }
        else {
            v1.push_back(c);   
        }
    }

    cout << "\nВсе ответы: ";
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }

  
    cout << "\nПравильные: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    cout << "\nНеправильные: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }

    cout << "\nКоличество ошибок: " << k << endl;

    return 0;
}