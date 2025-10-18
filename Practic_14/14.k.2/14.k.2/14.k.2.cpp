#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <windows.h>

template<typename Container>
void Print(const Container& container, const std::string& delimiter) {
    bool first = true; 

    for (const auto& element : container) {
        if (!first) {
            std::cout << delimiter; 
        }
        std::cout << element;
        first = false;
    }

    std::cout << "\n"; 
}

int main() {
 
    SetConsoleOutputCP(1251);
    std::vector<int> int_data = { 1, 2, 3, 4, 5 };
    std::cout << "Vector<int>: ";
    Print(int_data, ", ");

   
    std::vector<std::string> str_data = { "apple", "banana", "cherry" };
    std::cout << "Vector<string>: ";
    Print(str_data, " - ");

  
    std::list<double> double_data = { 1.1, 2.2, 3.3 };
    std::cout << "List<double>: ";
    Print(double_data, " | ");

   
    std::set<int> set_data = { 10, 20, 30, 40 };
    std::cout << "Set<int>: ";
    Print(set_data, " -> ");

   
    std::vector<char> char_data = { 'H', 'e', 'l', 'l', 'o' };
    std::cout << "Vector<char>: ";
    Print(char_data, "");

 

    return 0;
}