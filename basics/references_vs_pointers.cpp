#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    // pointer
    int *pa = &a;

    // reference
    int &aRef = a;

    cout << "aRef\t" << &aRef << endl;
    // same
    cout << "pa\t" << pa << endl;

    cout << "aRef + 1\t" << aRef + 1 << endl; // 6
    cout << "++aRef \t" << ++aRef << endl;    // 6, incremented value inside a
    cout << "pa + 1\t" << pa + 1 << endl;     // pointer arifm. +4 bytes shift
    cout << "*pa + 1\t" << *pa + 1 << endl;   // 7

    // int &pref; error - must be initialized

    // pointer to the reference
    int *pAref = &aRef;

    *pAref = 228; // makes a == 228 through aRef

    cout << "a\t" << a << endl;
}