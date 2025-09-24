// 5.k.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <windows.h>
using namespace std;


int countErrors(const int mas[], int size, const int correctResults[]) {
    int errors = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] != correctResults[i]) {
            errors++;
        }
    }
    return errors;
}


void printArray(const int mas[], int size, const string& title) {
    cout << title;
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}

int main() {
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int n = 10;           // количество примеров
    int mas[n];                 // массив с ответами пользователя
    int correct[n];             // массив с правильными ответами

    int a, b, c;

    for (int i = 0; i < n; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;

        mas[i] = c;             
        correct[i] = a * b;    
    }

   
    printArray(mas, n, "\nВсе ответы: ");

 
    printArray(correct, n, "Правильные ответы: ");

    int errors = countErrors(mas, n, correct);
    cout << "Количество ошибок: " << errors << endl;

    return 0;
}