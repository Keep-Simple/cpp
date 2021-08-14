#include <iostream>

using namespace std;

class Array
{
private:
    int length;

public:
    int *arr;
    Array(int Length)
    {
        length = Length;
        arr = new int[length];
    }
    ~Array()
    {
        cout << "Free memory" << endl;
        delete[] arr;
    }
};

int main()
{
    Array(4);
}