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
    int getX()
    {
        return x;
    }
    void setX(int newX)
    {
        x = newX;
    }
    int getY()
    {
        return y;
    }
    void setY(int newY)
    {
        y = newY;
    }
    void print()
    {
        cout << "x - " << x << "\t Y = " << y << endl;
    }
};

int main()
{
    Point a(5, 44);
}