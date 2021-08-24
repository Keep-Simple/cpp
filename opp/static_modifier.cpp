#include <iostream>

using namespace std;

class Apple
{

private:
    int weight;
    string color;
    int id;
    static int count;

public:
    Apple(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
        id = ++count;
    }

    int getId()
    {
        return id;
    }

    static int getCount()
    {
        return count;
    }
};

int Apple::count = 0; // can't declare inside class

int main()
{
    Apple apple(150, "red");
    Apple apple2(100, "green");

    cout << apple.getCount() << endl;  // 2
    cout << apple2.getCount() << endl; // 2
    cout << Apple::getCount() << endl; // 2
}