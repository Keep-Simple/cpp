#include <iostream>

using namespace std;

void fillArray(int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void showArray(const int *const arr, int const size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int *createDynamicArrayFromCin(int &size, string name = "NONAME")
{
    cout << "Enter size of the " << name << " - dynamic array" << endl;
    cin >> size;
    int *arr = new int[size];
    return arr;
}

// *&arr - reference to the pointer
void push_back(int *&arr, int &size, const int value)
{
    int *newArr = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }

    newArr[size] = value;
    size++;

    delete[] arr;

    arr = newArr;
}

void pop_back(int *&arr, int &size)
{
    int *newArr = new int[--size];

    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }

    delete[] arr;

    arr = newArr;
}

void insert(int *&arr, const int idx, int &size, const int value)
{
    if (idx > size)
    {
        cout << "error calling function insert!"
             << endl
             << "* insert point mustn't be bigger than initial array size!" << endl;
        return;
    }

    int *newArr = new int[size + 1];

    for (int i = 0; i < idx; i++)
    {
        newArr[i] = arr[i];
    }

    newArr[idx] = value;

    for (int i = idx; i < size; i++)
    {
        newArr[i + 1] = arr[i];
    }

    delete[] arr;
    size++;
    arr = newArr;
}

int main()
{
    int size;
    int *arr = createDynamicArrayFromCin(size);
    fillArray(arr, size);
    showArray(arr, size);

    push_back(arr, size, 999);
    showArray(arr, size);

    pop_back(arr, size);
    showArray(arr, size);

    insert(arr, 7, size, 228);
    showArray(arr, size);

    delete[] arr;
}