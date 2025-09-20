// 2.k.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    int totalScore = 0;
    int shots = 0;

    while (totalScore < 6) {
        double x, y;
        cin >> x >> y;
        shots++;

        double distance = sqrt(x * x + y * y);
        int score = 0;

        if (distance <= 1) score = 10;
        else if (distance <= 3) score = 5;
        else if (distance <= 5) score = 3;
        else if (distance <= 7) score = 1;

        totalScore += score;
    }

    string level;
    if (shots <= 6) level = "СНАЙПЕР";
    else if (shots <= 10) level = "СТРЕЛОК";
    else level = "НОВИЧОК";

    cout << shots << endl;
    cout << level << endl;

    return 0;
}
