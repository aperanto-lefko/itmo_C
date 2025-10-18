#include <iostream>
#include <vector>
#include <memory>
#include "student.h"
#include "teacher.h"

#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    // Создаем объекты разных типов
    vector<int> scores1 = { 5, 4, 5, 3, 4 };
    student student1("Иванов", "Иван", "Иванович", scores1);

    vector<int> scores2 = { 3, 4, 3, 5, 5 };
    student student2("Петров", "Петр", "Петрович", scores2);

    teacher teacher1("Сергеев", "Дмитрий", "Сергеевич", 40);
    teacher teacher2("Иванова", "Мария", "Петровна", 35);

   
    vector<human*> people;
    people.push_back(&student1);
    people.push_back(&student2);
    people.push_back(&teacher1);
    people.push_back(&teacher2);
  

    
    cout << "1. ИНФОРМАЦИЯ О ВСЕХ:" << endl;
    for (const auto person : people) {
        cout << "Роль: " << person->get_role() << endl;
        cout << "Инфо: " << person->get_info() << endl;
        cout << "Обязанности": ";
        person->perform_duty();
        cout << endl;
    }

    cout << "2. ТОЛЬКО СТУДЕНТЫ:" << endl;
    for (const auto person : people) {
        if (auto* student_ptr = dynamic_cast<student*>(person)) {
            cout << "Студент: " << student_ptr->get_info()
                << ", Средний балл: " << student_ptr->get_average_score() << endl;
        }
    }

    cout << endl << "3. ТОЛЬКО ПРЕПОДАВАТЕЛИ:" << endl;
    for (const auto person : people) {
        if (auto* teacher_ptr = dynamic_cast<teacher*>(person)) {
            cout << "Преподаватель: " << teacher_ptr->get_info()
                << ", Часы: " << teacher_ptr->get_work_time() << endl;
        }
    }

    cout << endl << "4. ГРУППИРОВКА ПО РОЛЯМ:" << endl;
    for (const auto person : people) {
        cout << person->get_role() << ": " << person->get_info() << endl;
    }

    return 0;
}