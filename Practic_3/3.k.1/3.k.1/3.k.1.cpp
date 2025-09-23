// 3.k.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;


bool checkSNILS(string input) {
    string s = "";

    // Убираем пробелы и дефисы, проверяем что остальное только цифры
    for (char c : input) {
        if (c == ' ' || c == '-') continue; // пропускаем пробелы и дефисы
        if (c < '0' || c > '9') return false; // если не цифра → ошибка
        s += c; // собираем строку только из цифр
    }

    // Проверка длины 
    if (s.length() != 11) return false;

    // Проверка: нельзя более двух одинаковых цифр подряд в первых 9
    for (int i = 0; i < 7; i++) {
        if (s[i] == s[i + 1] && s[i] == s[i + 2]) return false;
    }

    // Считаем сумму для контрольного числа
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        int digit = s[i] - '0';
        sum += digit * (9 - i); // позиция считается с конца
    }

    // Определяем правильное контрольное число
    int control;
    if (sum < 100) control = sum;
    else if (sum == 100 || sum == 101) control = 0;
    else {
        control = sum % 101;
        if (control == 100) control = 0;
    }

    // Берём контрольное число из номера (последние 2 цифры)
    int input_control = stoi(s.substr(9, 2));

    // Сравниваем вычисленное и введённое
    return control == input_control;
}

int main() {
    string snils;
    getline(cin, snils); 

    if (checkSNILS(snils))
        cout << "true";
    else
        cout << "false";

    return 0;
}
