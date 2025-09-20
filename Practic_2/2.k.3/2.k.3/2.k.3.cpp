// 2.k.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <windows.h>
int main() {
    SetConsoleOutputCP(1251);
    int coins[] = { 500, 200, 100, 50, 10, 5, 2, 1 }; 
    int amount;
    cin >> amount;

    for (int i = 0; i < 8; i++) {
        int count = amount / coins[i];
        if (count > 0) {
            cout << coins[i] << " руб: " << count << " шт." << endl;
            amount %= coins[i];
        }
    }

    return 0;
}
