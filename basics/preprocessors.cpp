// include is preprocessor's directive
#include <iostream>

// another directive
#define PI 3.14
#define tab "\t"
#define FOO(x, y) ((x) * (y))

using namespace std;

int main()
{
    cout << "number PI is" << tab << PI << endl;
    cout << FOO(3, 4) << endl;
}