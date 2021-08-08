#include <iostream>
#include <string>

using namespace std;

void foo(int &a, int &b, int &c)
{
    a = 10;
    b *= 2;
    c -= 100;
}

void printValues(int &a, int &b, int &c)
{
    cout << "a\t" << a << endl;
    cout << "b\t" << b << endl;
    cout << "c\t" << c << endl;
    cout << "***************" << endl;
}

template <typename T, typename E>
void swapValueWithReferences(T &x, E &y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 80, b = 7, c = 1;

    printValues(a, b, c);

    foo(a, b, c);

    printValues(a, b, c);

    int x = 1, y = 2;
    cout << "x, y\t=\t" << x << ", " << y << endl;
    swapValueWithReferences(x, y);
    cout << "x, y\t=\t" << x << ", " << y << endl;
    cout << "***************" << endl;

    string z = "hello", q = "bye";

    cout << "z, q\t=\t" << z << ", " << q << endl;
    swapValueWithReferences(z, q);
    cout << "z, q\t=\t" << z << ", " << q << endl;
    cout << "***************" << endl;
}