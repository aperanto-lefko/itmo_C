#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <windows.h>
int FindMaxEven(const std::vector<int>& numbers) {
  
    auto it = std::find_if(numbers.begin(), numbers.end(),
        [](int n) { return n % 2 == 0; });

    if (it == numbers.end()) {
        throw std::runtime_error("В векторе нет четных чисел");
    }

   
    int max_even = *it; 

    for (const auto& num : numbers) {
        if (num % 2 == 0 && num > max_even) {
            max_even = num;
        }
    }

    return max_even;
}

int main() {
    SetConsoleOutputCP(1251);
    try {
        std::vector<int> numbers1 = { 1, 3, 8, 5, 12, 7, 6 };
        std::cout << "Вектор: {1, 3, 8, 5, 12, 7, 6}" << std::endl;
        std::cout << "Максимальное четное: " << FindMaxEven(numbers1) << std::endl;
    }
    catch (const std::runtime_error& e) {
        std::cout << "Ошибка: " << e.what() << std::endl;
    }

    
    try {
        std::vector<int> numbers2 = { 1, 3, 5, 7, 9 };
        std::cout << "\nВектор: {1, 3, 5, 7, 9}" << std::endl;
        std::cout << "Максимальное четное: " << FindMaxEven(numbers2) << std::endl;
    }
    catch (const std::runtime_error& e) {
        std::cout << "Ошибка: " << e.what() << std::endl;
    }

    
    try {
        std::vector<int> numbers3 = { -4, -2, 0, 3, -8 };
        std::cout << "\nВектор: {-4, -2, 0, 3, -8}" << std::endl;
        std::cout << "Максимальное четное: " << FindMaxEven(numbers3) << std::endl;
    }
    catch (const std::runtime_error& e) {
        std::cout << "Ошибка: " << e.what() << std::endl;
    }

    

    return 0;
}