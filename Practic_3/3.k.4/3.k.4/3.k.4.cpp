// 3.k.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;

int sum(int m) {
    if (m <= 0) {
        return 0;
    }
    else {
        return m + sum(m - 5); // уменьшаем по 5
    }
}

int main() {
    SetConsoleOutputCP(1251);
    int n;

    cout << "Введите n (n > 0): ";
    cin >> n;

    int result = sum(5 *2* n); // передаём последнее слагаемое
    cout << "Сумма ряда S = 5 + 10 + 15 + ... + " << 5 * 2 * n << " = " << result << endl;

    return 0;
}




