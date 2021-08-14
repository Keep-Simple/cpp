#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    // from 0 to 127 english + numbers
    // 128 to 255 depends on set locale
    //
    for (int i = 0; i <= 255; i++)
    {
        cout << "code = " << i << "\t"
             << "char = " << (char)i << endl;
    }
}