#pragma once
#include <iostream>

using namespace std;

class Point
{
    int x;
    int y;

public:

    // Конструкторы
    Point();
    Point(int x, int y);

    // ---------------- АРИФМЕТИКА ----------------
    Point operator+(const Point& obj) const;
    Point operator+(int number) const;
    Point operator-(const Point& obj) const;
    Point operator*(int number) const;
    Point operator/(int number) const;

    // ---------------- КОМБИНИРОВАННЫЕ ----------------
    Point& operator+=(int number);
    Point& operator-=(const Point& obj);
    Point& operator*=(int number);
    Point& operator/=(int number);

    // ---------------- ЛОГИЧЕСКИЕ ----------------
    bool operator==(const Point& obj) const;
    bool operator!=(const Point& obj) const;
    bool operator>(const Point& obj) const;
    bool operator<(const Point& obj) const;
    bool operator>=(const Point& obj) const;
    bool operator<=(const Point& obj) const;

    // ---------------- ПРЕОБРАЗОВАНИЕ ТИПОВ ----------------
    operator int();
    operator double();

    // ---------------- ИНКРЕМЕНТ ----------------
    Point& operator++();     // префикс
    Point operator++(int);   // постфикс

    // ---------------- ДЕКРЕМЕНТ ----------------
    Point& operator--();     // префикс
    Point operator--(int);   // постфикс

    void Show() const;

    int GetX() const;
    int GetY() const;
};

// Глобальная функция для int + Point
Point operator+(int number, const Point& obj);
