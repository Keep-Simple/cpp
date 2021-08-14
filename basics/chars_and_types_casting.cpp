#include <iostream>

using namespace std;

int main()
{
    char symbol = 'q';
    char str[] = "qq";
    char str2[] = {'q', 'q', '\0'};

    double a = 33.5;
    cout << a << endl;
    cout << (int)a << endl;
    cout << (bool)a << endl;
    cout << (char)a << endl; // same as (char)(int)a

    int b = 34.5;
    int c = 3;
    double f = 3;

    cout << b << endl;               // 34
    cout << b / c << endl;           // 11
    cout << b / f << endl;           // 11.3333
    cout << (double)b / c << endl;   // 11.3333
    cout << (double)(b / c) << endl; // 11
}