#include <iostream>

using namespace std;

int main()
{

    int rows;
    int cols;

    cout << "Enter number of rows in the array" << endl;
    cin >> rows;
    cout << "Enter number of columns in the array" << endl;
    cin >> cols;

    int **arr = new int *[rows];

    // init array with values
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];

        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    cout << "Created array with " << rows << " rows and " << cols << " columns" << endl;

    // print array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // free memory
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr; // clear array of pointers only after cleaning child arrays
}