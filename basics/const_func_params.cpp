#include <iostream>

using namespace std;

void fillArray(int *const arr, const int &size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void showArray(const int *const arr, int const &size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int arr[4] = {};
    int size1, size2;
    cout << "Enter size of the first array" << endl;
    cin >> size1;
    cout << "Enter size of the second array" << endl;
    cin >> size2;

    int *arr1 = new int[size1];
    int *arr2 = new int[size2];

    fillArray(arr1, size1);
    fillArray(arr2, size2);

    // copy dynamic array arr1 <- arr2

    // 1. delete arr1 elements
    delete[] arr1;
    // 2. get dynamic memory
    arr1 = new int[size2];
    // 3. copy each int
    for (int i = 0; i < size2; i++)
    {
        arr1[i] = arr2[i];
    }
    // 4. delete arr2 elements
    delete[] arr2;
    arr2 = nullptr;

    showArray(arr1, size2);
}