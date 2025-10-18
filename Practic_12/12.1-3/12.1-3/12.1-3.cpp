#include <iostream>
#include <vector>
#include "student.h"
using namespace std;
#include <windows.h>
#include "teacher.h"
int main()
{
    SetConsoleOutputCP(1251);
    vector<int> scores1 = { 5, 4, 5, 3, 4 };
    student student1("Иванов", "Иван", "Иванович", scores1);

    vector<int> scores2 = { 3, 4, 3, 5, 5 };
    student student2("Петров", "Петр", "Петрович", scores2);

    vector<int> scores3 = { 5, 5, 5, 5, 5 };
    student student3("Сидорова", "Анна", "Сергеевна", scores3);


    cout << " ИНФОРМАЦИЯ О СТУДЕНТАХ" << endl << endl;

    cout << "Студент 1:" << endl;
    cout << "ФИО: " << student1.get_full_name() << endl;
    cout << "Средний балл: " << student1.get_average_score() << endl;
    cout << endl;

    cout << "Студент 2:" << endl;
    cout << "ФИО: " << student2.get_full_name() << endl;
    cout << "Средний балл: " << student2.get_average_score() << endl;
    cout << endl;

    cout << "Студент 3:" << endl;
    cout << "ФИО: " << student3.get_full_name() << endl;
    cout << "Средний балл: " << student3.get_average_score() << endl;
    cout << endl;

    unsigned int teacher_work_time = 40;
    teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);

    cout << "Преподаватель: " << tch->get_full_name() << endl;
    cout << "Количество часов: " << tch->get_work_time() << endl;
    cout << endl;

    
    teacher tch2("Иванова", "Мария", "Петровна", 35);
    cout << "Преподаватель 2: " << tch2.get_full_name() << endl;
    cout << "Количество часов: " << tch2.get_work_time() << endl;
    cout << endl;

    cout << "БАЗОВЫЙ КЛАСС" << endl;
    human person("Смирнов", "Алексей", "Васильевич");
    cout << "Человек: " << person.get_full_name() << endl;

    return 0;
}


