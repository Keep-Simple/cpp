#include <iostream>

using namespace std;

string DataFromDB()
{
    return "Data from DB";
}

string DataFromWebServer()
{
    return "Data from webserver";
}

void ShowInfo(string (*getData)())
{
    cout << getData() << endl;
}

int foo1(int a)
{
    return a - 1;
}

int foo2(int a)
{
    return a * 2;
}

int main()
{
    int (*fooPointer)(int);

    fooPointer = foo2;

    cout << fooPointer(3) << endl;

    ShowInfo(DataFromDB);
    ShowInfo(DataFromWebServer);
}