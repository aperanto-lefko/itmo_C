#include <iostream>
#include <windows.h>
#include <stdexcept>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) {
        
        if (h < 0 || m < 0 || s < 0) {
            throw invalid_argument("Время не может быть отрицательным");
        }

        
        if (m >= 60 || s >= 60) {
            throw invalid_argument("Минуты и секунды должны быть меньше 60");
        }

        int totalSeconds = h * 3600 + m * 60 + s;

        if (totalSeconds < 0) totalSeconds = 0;

        seconds = totalSeconds % 60;
        totalSeconds /= 60;
        minutes = totalSeconds % 60;
        totalSeconds /= 60;
        hours = totalSeconds % 24;
    }

    void display() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds;
    }

    Time operator+(const Time& other) const {
        return Time(hours + other.hours,
            minutes + other.minutes,
            seconds + other.seconds);
    }
};

int main() {
    SetConsoleOutputCP(1251);

    try {
       
        const Time time1(2, 45, 30);
        const Time time2(1, 30, 45);

        cout << "Время 1: ";
        time1.display();
        cout << endl;

        cout << "Время 2: ";
        time2.display();
        cout << endl;

        Time result2 = time1 + time2;
        cout << "time1 + time2: ";
        result2.display();
        cout << endl;

        
        Time test2(0, 0, 3665);
        cout << "Time(0, 0, 3665) = ";
        test2.display();
        cout << endl;

              
        try {
            Time badTime(-1, 30, 45);
        }
        catch (const invalid_argument& e) {
            cout << "Ошибка: " << e.what() << endl;
        }

        
        try {
            Time badTime(10, 70, 45);
        }
        catch (const invalid_argument& e) {
            cout << "Ошибка: " << e.what() << endl;
        }

       
        try {
            Time badTime(10, 30, -5);
        }
        catch (const invalid_argument& e) {
            cout << "Ошибка: " << e.what() << endl;
        }

    }
    catch (const exception& e) {
        cout << "Общая ошибка: " << e.what() << endl;
    }

    return 0;
}
