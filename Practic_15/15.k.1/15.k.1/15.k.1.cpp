#include <iostream>
#include <map>
#include <string>
#include <windows.h>
struct StudentGrade {
    std::string name;
    char grade;
};

int main() {
    SetConsoleOutputCP(1251);
    std::map<std::string, StudentGrade> students;  

    students["иванов"] = { "Иванов Иван", '5' };
    students["петров"] = { "Петров Петр", '4' };
    students["сидорова"] = { "Сидорова Анна", '3' };

   
    std::cout << "\n Список всех студентов" << std::endl;
    for (const auto& pair : students) {
        std::cout << pair.second.name << " - оценка: " << pair.second.grade << std::endl;
    }

   
    std::cout << "\nИзменение оценки" << std::endl;
    students["петров"].grade = '5';
    std::cout << "Новая оценка Петрова: " << students["петров"].grade << std::endl;

    return 0;
}