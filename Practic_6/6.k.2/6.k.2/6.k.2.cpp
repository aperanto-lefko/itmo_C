// 6.k.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include <iostream>
#include <fstream>
using namespace std;

int* max_vect(int kc, int* a, int* b) {
    int* result = new int[kc];
    for (int i = 0; i < kc; i++) {
        if (a[i] > b[i]) {
            result[i] = a[i];
        }
        else {
            result[i] = b[i];
        }
    }
    return result;
}

int main() {
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };

    int kc = sizeof(a) / sizeof(a[0]);
    int* c;

    c = max_vect(kc, a, b);

    ofstream file("result.txt");
    file << "Исходный массив a: ";
    for (int i = 0; i < kc; i++) {
        file << a[i] << " ";
    }
    file << "\nИсходный массив b: ";
    for (int i = 0; i < kc; i++) {
        file << b[i] << " ";
    }
    file << "\nРезультат max_vect: ";
    for (int i = 0; i < kc; i++) {
        file << c[i] << " ";
    }
    file.close();

    for (int i = 0; i < kc; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    delete[] c;
    return 0;
}