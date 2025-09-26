// 6.k.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
int main() {
    SetConsoleOutputCP(1251);
    std::ofstream file("poem.txt");
    std::string line;

    while (std::getline(std::cin, line) && !line.empty()) {
        file << line << std::endl;
    }

    file.close();
    return 0;
}

