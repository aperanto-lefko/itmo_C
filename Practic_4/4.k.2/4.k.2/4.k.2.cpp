// 4.k.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <windows.h>


bool Input(int& a, int& b) {
    cout << "Введите два целых числа через пробел: ";
    if (!(cin >> a >> b)) { 
        return false;
    }

    if (a < 0 || b < 0) { 
        return false;
    }

    return true;
}

int main() {
    SetConsoleOutputCP(1251);
    int a, b;
    if (!Input(a, b)) { 
        cerr << "error" << endl;
        return 1;
    }

    int s = a + b;
    cout << "Сумма: " << s << endl;

    return 0;
}
