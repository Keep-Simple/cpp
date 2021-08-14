#include <iostream>

using namespace std;

class Array
{

public:
    int *arr;
    int length;

    Array(int Length)
    {
        length = Length;
        arr = new int[length];
        cout << "Constructor called " << this << endl;
    }
    // copy constructor
    Array(const Array &other)
    {
        // this->arr = other.arr; default impl
        this->length = other.length;
        this->arr = new int[other.length];

        for (int i = 0; i < other.length; i++)
        {
            this->arr[i] = other.arr[i];
        }
        cout << "Copy constructor called " << this << endl;
    }
    ~Array()
    {
        cout << "Free memory " << this << endl;
        delete[] arr;
    }
};

// args passed by value through copy
void foo(Array value)
{
}

int main()
{
    Array a(4);

    Array b(a);
}