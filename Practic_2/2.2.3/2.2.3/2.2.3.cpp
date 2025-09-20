// 2.2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    double x, x1, x2, y;
    cout << "x1 = "; cin >> x1;
    cout << "x2 = "; cin >> x2;
    cout << "\tx\tsin(x)\n";
    x = x1; 
        
    while (x <= x2) 
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    }

    int a, b, temp;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    
    do
    {
        if (a > b)
            a -= b; 

        else
            b -= a;
    } while (a != b); 

    cout << "НОД = " << a << endl;

    return 0;
}


