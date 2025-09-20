// 2.k.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int getPrimeIndex(int p) {
    int count = 0;
    for (int i = 2; i <= p; i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

bool isSuperPrime(int n) {
    if (!isPrime(n)) return false;
    int index = getPrimeIndex(n);
    return isPrime(index);
}

int main() {
    SetConsoleOutputCP(1251);
    int num;
    cout << "Введите число: ";
    cin >> num;

    if (isSuperPrime(num))
        cout << num << " является суперпростым числом" << endl;
    else
        cout << num << " не является суперпростым числом" << endl;

    return 0;
}

