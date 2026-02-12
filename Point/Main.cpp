#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    Point p1(2, 3);
    Point p2(4, 5);

    // Арифметика
    Point p3 = p1 + p2;
    p3.Show();

    Point p4 = p1 - p2;
    p4.Show();

    Point p5 = p1 * 2;
    p5.Show();

    Point p6 = 2 + p1;
    p6.Show();

    // Комбинированные
    p1 += 5;
    p1.Show();

    p1 *= 2;
    p1.Show();

    // Логические
    if (p1 > p2)
        cout << "p1 > p2" << endl;

    // Инкремент / декремент
    ++p1;
    p1.Show();

    p1--;
    p1.Show();

    // Преобразование типов
    int sum = p1;
    cout << "int: " << sum << endl;

    double d = p1;
    cout << "double: " << d << endl;

    return 0;
}
