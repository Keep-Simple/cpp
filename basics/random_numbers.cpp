#include <iostream>
#include <ctime>

using namespace std;

void showNumber(string name, int value)
{
    cout << name << " has random value = " << value << endl;
}

int main()
{
    showNumber("rand1", rand()); // always the same

    srand(25); // changes rand return

    showNumber("rand2", rand()); // always the same

    srand(time(NULL)); // changes rand return

    // always different because of time
    showNumber("rand3", rand());
    showNumber("rand4", rand());
}