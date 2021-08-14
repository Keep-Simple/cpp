#include <iostream>

using namespace std;

// argc cli args count, argv array of string args
int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
}