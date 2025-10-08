

#include <iostream>
#include <windows.h>
using namespace std;

class Time {
private:
    int hours;     
    int minutes;    
    int seconds;    

public:
    
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) {
       
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
    const Time time1(2, 45, 30);  
    const Time time2(1, 70, 90);   // 02:11:30

    Time result;

    cout << "Время 1: ";
    time1.display();
    cout << endl;

    cout << "Время 2: ";
    time2.display();
    cout << endl;

    
    Time result2 = time1 + time2;
    cout << "time1 + time2 (оператор +): ";
    result2.display();
    cout << endl;

    cout << "\nДемонстрация нормализации:" << endl;
    Time test1(25, 70, 80);  // 25:70:80 -> 02:11:20
    cout << "Time(25, 70, 80) = ";
    test1.display();
    cout << endl;

    Time test2(0, 0, 3665);  // 3665 секунд -> 01:01:05
    cout << "Time(0, 0, 3665) = ";
    test2.display();
    cout << endl;

    return 0;
}

