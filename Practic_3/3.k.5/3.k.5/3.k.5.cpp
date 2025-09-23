// 3.k.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;

void calculate(int num) {
    if (num == 0) {
        return;
    }
    
    calculate(num / 2);
    cout << num % 2;
}

int main() {
    SetConsoleOutputCP(1251);
    int num;

    cout << "Введите число: ";
    cin >> num;

    if (num == 0) {
        cout << "0";
    }
    else {
        calculate(num);
    }

    cout << endl;
    return 0;
}
