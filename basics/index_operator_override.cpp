#include <iostream>

using namespace std;

class TestClass
{
public:
    int &operator[](int idx)
    {
        return arr[idx];
    }

private:
    int arr[5] = {5, 4, 3, 933, 23};
};

int main()
{
    TestClass a;
    cout << a[1] << endl;
    a[1] = 228;
    cout << a[1] << endl;
}