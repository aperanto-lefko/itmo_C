// 5.k.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <cstdlib>   
#include <cstring>  
using namespace std;
#include <windows.h>
int main(int argc, char* argv[]) {
    SetConsoleOutputCP(1251);
    if (argc < 4) {
        cerr << "Ошибка: недостаточно аргументов.\n";
        cerr << "Использование: " << argv[0] << " -a|-m число1 число2\n";
        return 1;
    }

   
    if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0) {
        cerr << "Ошибка: второй аргумент должен быть -a или -m\n";
        return 1;
    }

   
    int x = atoi(argv[2]);
    int y = atoi(argv[3]);

    
    if ((x == 0 && argv[2][0] != '0') || (y == 0 && argv[3][0] != '0')) {
        cerr << "Ошибка: аргументы должны быть целыми числами.\n";
        return 1;
    }

    int result;
    if (strncmp(argv[1], "-a", 2) == 0) {
        result = x + y;
        cout << "Сумма: " << result << endl;
    }
    else {
        result = x * y;
        cout << "Произведение: " << result << endl;
    }

    return 0;
}
