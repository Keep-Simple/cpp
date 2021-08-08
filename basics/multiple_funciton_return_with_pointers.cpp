#include <iostream>

using namespace std;

void foo(int *pa, int *pb, int *pc)
{
    *pa = 555;
    (*pb)++;
    *pc = -20;
}

void hometaskSwapValues(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main()
{
    int a = 0, b = 0, c = 1;

    cout << "a\t" << a << endl;
    cout << "b\t" << b << endl;
    cout << "c\t" << c << endl;

    foo(&a, &b, &c);
    cout << "***************" << endl;

    cout << "a\t" << a << endl;
    cout << "b\t" << b << endl;
    cout << "c\t" << c << endl;
    cout << "***************" << endl;

    int x = 10, y = 20;
    cout << "x\t" << x << endl;
    cout << "y\t" << y << endl;
    cout << "***************" << endl;

    hometaskSwapValues(&x, &y);

    cout << "x\t" << x << endl;
    cout << "y\t" << y << endl;
    cout << "***************" << endl;
}