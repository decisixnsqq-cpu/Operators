#include "Point.h"

// ---------------- КОНСТРУКТОРЫ ----------------

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

// ---------------- АРИФМЕТИКА ----------------

Point Point::operator+(const Point& obj) const
{
    return Point(x + obj.x, y + obj.y);
}

Point Point::operator+(int number) const
{
    return Point(x + number, y + number);
}

Point Point::operator-(const Point& obj) const
{
    return Point(x - obj.x, y - obj.y);
}

Point Point::operator*(int number) const
{
    return Point(x * number, y * number);
}

Point Point::operator/(int number) const
{
    return Point(x / number, y / number);
}

// ---------------- КОМБИНИРОВАННЫЕ ----------------

Point& Point::operator+=(int number)
{
    x += number;
    y += number;
    return *this;
}

Point& Point::operator-=(const Point& obj)
{
    x -= obj.x;
    y -= obj.y;
    return *this;
}

Point& Point::operator*=(int number)
{
    x *= number;
    y *= number;
    return *this;
}

Point& Point::operator/=(int number)
{
    x /= number;
    y /= number;
    return *this;
}

// ---------------- ЛОГИЧЕСКИЕ ----------------

bool Point::operator==(const Point& obj) const
{
    return x == obj.x && y == obj.y;
}

bool Point::operator!=(const Point& obj) const
{
    return !(*this == obj);
}

bool Point::operator>(const Point& obj) const
{
    if (x > obj.x)
        return true;
    if (x == obj.x && y > obj.y)
        return true;
    return false;
}

bool Point::operator<(const Point& obj) const
{
    if (x < obj.x)
        return true;
    if (x == obj.x && y < obj.y)
        return true;
    return false;
}

bool Point::operator>=(const Point& obj) const
{
    return !(*this < obj);
}

bool Point::operator<=(const Point& obj) const
{
    return !(*this > obj);
}

// ---------------- ПРЕОБРАЗОВАНИЕ ----------------

Point::operator int()
{
    return x + y;
}

Point::operator double()
{
    return (double)(x + y);
}

// ---------------- ИНКРЕМЕНТ ----------------

Point& Point::operator++()
{
    ++x;
    ++y;
    return *this;
}

Point Point::operator++(int)
{
    Point temp(*this);
    ++x;
    ++y;
    return temp;
}

// ---------------- ДЕКРЕМЕНТ ----------------

Point& Point::operator--()
{
    --x;
    --y;
    return *this;
}

Point Point::operator--(int)
{
    Point temp(*this);
    --x;
    --y;
    return temp;
}

// ---------------- ПРОЧЕЕ ----------------

void Point::Show() const
{
    cout << "X: " << x << " Y: " << y << endl;
}

int Point::GetX() const
{
    return x;
}

int Point::GetY() const
{
    return y;
}

// ---------------- ГЛОБАЛЬНАЯ ФУНКЦИЯ ----------------

Point operator+(int number, const Point& obj)
{
    return Point(obj.GetX() + number, obj.GetY() + number);
}
