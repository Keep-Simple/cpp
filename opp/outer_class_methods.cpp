#include <iostream>

using namespace std;

class MyClass
{
private:
public:
    MyClass();
    ~MyClass();
    void printMessage();
};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void MyClass::printMessage()
{
    cout << "Hello!" << endl;
}

int main()
{
    MyClass a;
    a.printMessage();
}
