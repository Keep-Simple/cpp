#include <iostream>

using namespace std;

void foo(int *pa) {
    (*pa)++;
    // *pa = *pa + 1; same
}

int main()
{
    int a = 0;
    const int SIZE = 5;
    int arr[SIZE]{4, 55, 79, 1, 4};

    cout << "a\t" << a << endl;
    foo(&a);
    cout << "***************" << endl;

    cout << "a\t" << a << endl;

    cout << "***************" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }

    foo(arr);
    cout << "***************" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
}