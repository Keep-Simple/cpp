#include <iostream>

using namespace std;

int main()
{
    int *pa = new int;
    *pa = 10;
    cout << *pa << endl;

    delete pa;
    cout << *pa << endl;
    pa = nullptr; // or NULL to prevent pointing

    int size;
    cout << "Enter dynamic array size: " << endl;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << "\t";
        cout << arr + i << endl;
    }

    delete[] arr;
}