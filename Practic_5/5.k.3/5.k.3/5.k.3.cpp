// 5.k.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
#include <windows.h>

int search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            if (i > 0) {
                // меняем найденный элемент с предыдущим
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                return i - 1; // возвращаем новый индекс найденного элемента
            }
            return i; // если элемент был в начале массива
        }
    }
    return -1; // если элемент не найден
}

int main() {
    SetConsoleOutputCP(1251);
    int arr[] = { 5, 3, 7, 9, 1, 8, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Введите число для поиска: ";
    cin >> key;

    int pos = search(arr, size, key);

    if (pos != -1) {
        cout << "Элемент найден. Новый индекс: " << pos << endl;
    }
    else {
        cout << "Элемент не найден." << endl;
    }

    cout << "Массив после поиска: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
