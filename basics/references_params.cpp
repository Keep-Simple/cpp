
#include <iostream>
using namespace std;

// accepts by value
void foo(int a)
{
    a = 1;
}

// accepts by reference
void foo2(int &a)
{
    a = 2;
}

// accepts by pointer
void foo3(int *a)
{
    *a = 3;
}

void printValue(int *value)
{
    cout << "value\t=\t" << *value << endl;
    cout << "***************" << endl;
}

int main()
{
    int value = 5;

    printValue(&value); // 5

    foo(value);
    printValue(&value); // 5, hasn't changes

    foo2(value);
    printValue(&value); // 2, changed through reference

    foo3(&value);
    printValue(&value); // 3, changed trough pointer
}
