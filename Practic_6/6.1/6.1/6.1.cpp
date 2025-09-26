// 6.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>   
#include <fstream>    
#include <cstdlib>    
#include <ctime>    )

using namespace std;  

int main() {
    // Инициализация генератора случайных чисел текущим временем
    srand(time(0));

    double sum = 0;        // Переменная для хранения суммы всех чисел
    int const n = 100;     // Константа - размер массива
    double nums[n];        // Массив для хранения чисел

    // Заполнение массива случайными числами от 0 до 99
    for (int i = 0; i < n; i++) {
        nums[i] = (rand() % 100);  // Генерируем случайное число от 0 до 99
    }

    // Создание объекта для записи в файл в бинарном режиме
    ofstream out("test", ios::out | ios::binary);

   
    if (!out) {
        cout << "Файл открыть невозможно\n";
        return 1;  // Завершение программы с кодом ошибки
    }

    // Запись массива в файл как бинарных данных
    out.write((char*)nums, sizeof(nums));

 
    out.close();

    // Создание объекта для чтения из файла в бинарном режиме
    ifstream in("test", ios::in | ios::binary);

  
    if (!in) {
        cout << "Файл открыть невозможно";
        return 1;  
    }

    // Чтение данных из файла обратно в массив
    in.read((char*)&nums, sizeof(nums));

    
    int k = sizeof(nums) / sizeof(double);

    for (int i = 0; i < k; i++) {
        sum = sum + nums[i];  
        cout << nums[i] << ' ';  
    }

    cout << "\nsum = " << sum << endl;

  
    in.close();

    return 0; 
}
