
#include <iostream>
#include <stdexcept>
using namespace std;
#include <windows.h>
class Time {
private:
    int hours;
    int minutes;
    int seconds;

    void normalize() {
        int totalSeconds = hours * 3600 + minutes * 60 + seconds;
        if (totalSeconds < 0) totalSeconds = 0;
        seconds = totalSeconds % 60;
        totalSeconds /= 60;
        minutes = totalSeconds % 60;
        hours = totalSeconds / 60;
    }

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        if (h < 0 || m < 0 || s < 0) {
            throw invalid_argument("Время не может быть отрицательным");
        }
       
        normalize();
    }

    void display() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds;
    }

    Time operator+(const Time& other) const {
        return Time(hours + other.hours, minutes + other.minutes, seconds + other.seconds);
    }

    Time operator-(const Time& other) const {
        return Time(hours - other.hours, minutes - other.minutes, seconds - other.seconds);
    }

    Time operator+(double sec) const {
        return Time(hours, minutes, seconds + static_cast<int>(sec));
    }

    friend Time operator+(double sec, const Time& t) {
        return t + sec;
    }

    bool operator==(const Time& other) const {
        return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    try {
        Time t1(2, 30, 45);
        Time t2(1, 15, 20);

        cout << "t1: "; t1.display(); cout << endl;
        cout << "t2: "; t2.display(); cout << endl;

        Time sum = t1 + t2;
        cout << "t1 + t2: "; sum.display(); cout << endl;

        Time diff = t1 - t2;
        cout << "t1 - t2: "; diff.display(); cout << endl;

        Time timePlusDouble = t1 + 30.5;
        cout << "t1 + 30.5: "; timePlusDouble.display(); cout << endl;

        Time doublePlusTime = 45.2 + t2;
        cout << "45.2 + t2: "; doublePlusTime.display(); cout << endl;

        cout << "t1 == t2: " << (t1 == t2 ? "true" : "false") << endl;

       
    }
    catch (const exception& e) {
        cout << "Общая ошибка: " << e.what() << endl;
    }

    return 0;
}