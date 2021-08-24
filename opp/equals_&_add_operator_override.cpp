#include <iostream>

using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int x, int y)
    {
        cout << this << "\t"
             << "constructor" << endl;
        this->x = x;
        this->y = y;
    }
    Point(int x)
    {
        this->x = x;
        this->y = x;
    }
    bool operator==(Point &other)
    {
        return other.x == x && other.y == y;
    }
    bool operator!=(Point &other)
    {
        return !operator==(other);
    }
    Point operator+(Point &other)
    {
        int cx = x + other.x;
        int cy = y + other.y;
        return Point(cx, cy);
    }
    // prefix increment
    Point &operator++()
    {
        x++;
        y++;
        return *this;
    }
    // postfix increment
    // return not reference, for passing temp by copy. Otherwise, after reference to temp will be undefined
    Point operator++(int _)
    {
        Point temp(*this);
        operator++();
        return temp;
    }
    int getX()
    {
        return x;
    }
    void setX(int x)
    {
        this->x = x;
    }
    int getY()
    {
        return y;
    }
    void setY(int y)
    {
        this->y = y;
    }
    void print()
    {
        cout << "x - " << x << "\t Y = " << y << endl;
    }
};

int main()
{
    Point a(5, 44);
    Point b(9, 4);

    bool res = a != b;
    cout << res << endl;
    Point c = a + b;

    ++c;
}