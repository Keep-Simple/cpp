#include <iostream>

using namespace std;

int strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str0[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str1[] = "Hello";
    char *str2 = str1;

    char *strArr[] = {"Hello", "World", "!"};

    cout << strlen(str0) << endl;
    cout << strlen(str1) << endl;
    cout << strlen(str2) << endl;
}