#include <iostream>
#include <windows.h>
using namespace std;


template<typename T>
T average(T arr[], int size) {
    T sum = T(); 

    for (int i = 0; i < size; i++) {
        sum += arr[i]; 
    }

    return sum / size; 
}

int main() {
    SetConsoleOutputCP(1251);

   
    int int_arr[] = { 10, 20, 30, 40, 50 };
    cout << "Массив int: {10, 20, 30, 40, 50}" << endl;
    cout << "Среднее: " << average(int_arr, 5) << endl << endl;

    long long_arr[] = { 100L, 200L, 300L, 400L };
    cout << "Массив long: {100, 200, 300, 400}" << endl;
    cout << "Среднее: " << average(long_arr, 4) << endl << endl;

   
    double double_arr[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
    cout << "Массив double: {1.5, 2.5, 3.5, 4.5, 5.5}" << endl;
    cout << "Среднее: " << average(double_arr, 5) << endl << endl;

    

    return 0;
}