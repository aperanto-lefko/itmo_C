#include <iostream>
using namespace std;
#include <windows.h>

struct Time {
    
    int hours;
    int minutes;
    int seconds;

    int toSeconds() {
        return hours * 3600 + minutes * 60 + seconds;
    }

    Time add(Time t) {
        Time res;
        int total = this->toSeconds() + t.toSeconds();
        res.hours = total / 3600;
        total = total % 3600;
        res.minutes = total / 60;
        res.seconds = total % 60;
        return res;
    }

    Time subtract(Time t) {
        Time res;
        int total = this->toSeconds() - t.toSeconds();
        if (total < 0) total = 0; 
        res.hours = total / 3600;
        total = total % 3600;
        res.minutes = total / 60;
        res.seconds = total % 60;
        return res;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    Time t1, t2;

    cout << "Введите время (часы минуты секунды): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Во введенном времени " << t1.toSeconds() << " секунд." << endl;

    cout << "Введите второе время (часы минуты секунды): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    Time sum = t1.add(t2);
    Time diff = t1.subtract(t2);

    cout << "Сумма: " << sum.hours << " ч " << sum.minutes << " м " << sum.seconds << " с" << endl;
    cout << "Разность: " << diff.hours << " ч " << diff.minutes << " м " << diff.seconds << " с" << endl;

    return 0;
}