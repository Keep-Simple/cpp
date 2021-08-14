#include <iostream>
using namespace std;
#define DEBUG
#define LVL 5

int main()
{

#ifdef DEBUG
    cout << "Loop start" << endl;
#else
    cout << "No info" << endl;
#endif

    for (int i = 0; i < 4; i++)
    {
        cout << i << endl;
    }

#if LVL < 5
    cout << "Loop end" << endl;
#elif LVL == 5
    cout << "Some info" << endl;
#endif
}