#include <iostream>

using namespace std;

class Array
{

public:
    int *arr;
    int length;

    Array(int length)
    {
        this->length = length;
        arr = new int[length];
        cout << "Constructor called " << this << endl;
    }
    // copy constructor
    Array(const Array &other)
    {
        // this->arr = other.arr; default impl
        copyObj(other);
        cout << "Copy constructor called " << this << endl;
    }
    // override = operator
    Array &operator=(const Array &other)
    {
        cout << "Called assigment operator = " << this << endl;
        // free memory
        this->~Array();
        // assign each field
        return copyObj(other);
    }
    ~Array()
    {
        cout << "Free memory " << this << endl;
        delete[] arr;
    }

private:
    Array &copyObj(const Array &other)
    {
        this->length = other.length;
        this->arr = new int[other.length];

        for (int i = 0; i < other.length; i++)
        {
            this->arr[i] = other.arr[i];
        }

        cout << "Copy obj called " << this << endl;
        return *this;
    }
};

int main()
{
    Array a(4);

    Array b(5);

    Array c(6);

    c = a = b;
}