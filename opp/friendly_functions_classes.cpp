#include <iostream>

using namespace std;

class Test; // so Point can see it

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
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void print()
    {
        cout << "x - " << x << "\t Y = " << y << endl;
    }

    friend void changeX(Point &, Test &); // declare, could be in private too
};

class Test
{
private:
    int data = 0;
    friend void changeX(Point &, Test &);
};

void changeX(Point &value, Test &_)
{
    value.x = 99999; // can get an set private x
}

int main()
{
    Point a(3, 3);
    Test b;
    a.print();
    changeX(a, b);
    a.print();
}