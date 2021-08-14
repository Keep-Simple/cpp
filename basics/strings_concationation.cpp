#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // c style
    char str1[255] = "Hello";
    char str2[255] = "World";

    cout << str1 << endl;
    strcat(str1, str2);
    cout << str1 << endl;

    // c++ style
    string str3 = "Hello";
    string str4 = "Wolrd";
    string result;
    result = str3 + str4;

    cout << result << endl;
}