#include <iostream>

using namespace std;

class Human
{
public:
    int age;
    string name;
    void print()
    {
        cout << "Name " << name << endl
             << "Age " << age << endl
             << endl;
        ;
    }

private:
    int f;

    // like private, but also available in the inheritance
protected:
    int n;
};

class Point
{
private:
    int x;
    int y;

public:
    Point(int X, int Y)
    {
        x = X;
        y = Y;
    }
    Point(int X)
    {
        x = X;
        y = X;
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

class CoffeeGrinder
{
public:
    void start()
    {
        bool voltageIsNormal = checkVoltage();
        if (voltageIsNormal)
        {
            cout << "Coffe grinder started" << endl;
        }
        else
        {
            cout << "Beep beep, low voltage" << endl;
        }
    }

private:
    bool checkVoltage()
    {
        srand(time(NULL));
        return rand() % 2 == 0;
    }
};

int main()
{
    Human nick;
    nick.age = 17;
    nick.name = "Nick";

    nick.print();

    CoffeeGrinder cg;
    cg.start();

    Point a(5, 44);
}