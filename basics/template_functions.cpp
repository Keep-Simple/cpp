
#include <iostream>

using namespace std;

template <typename T>
T sum(T x, T y)
{
    return x + y;
}

template <typename T1, typename T2>
T1 sum(T1 x, T2 y)
{
    return x + y;
}

int main()
{
    cout << sum(4, 6) << endl;
    cout << sum(3.5, 3.5) << endl;
    cout << sum(3.5, 3) << endl; // 6.5
    cout << sum(3, 3.9) << endl; // 6 - returns int, because using overloaded template function

    // cout << sum("sum", "opa") << endl;
}