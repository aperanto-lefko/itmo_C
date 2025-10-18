#include <iostream>
#include <vector>
#include <string>
#include <complex>
#include <windows.h>
template<typename T>
concept Sortable = requires(T a, T b) {
    a < b;
    a > b;
};


template<Sortable T>
bool is_sorted(const std::vector<T>& vec) {
    for (size_t i = 1; i < vec.size(); i++) {
        if (vec[i] < vec[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    SetConsoleOutputCP(1251);
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    std::cout << "{1, 2, 3, 4, 5}: " << (is_sorted(numbers) ? "да" : "нет") << std::endl;

   
    std::vector<std::string> words = { "apple", "banana", "cherry" };
    std::cout << "{\"apple\", \"banana\", \"cherry\"}: " << (is_sorted(words) ? "да" : "нет") << std::endl;

   
    std::vector<std::complex<double>> complex_nums = { {1, 2}, {3, 4} };
    // is_sorted(complex_nums); 

    return 0;
}