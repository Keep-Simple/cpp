#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const string path = "myFile.txt";
    int readType = 0;
    cout << "Enter readType number from 0 to 2" << endl;
    cin >> readType;

    ifstream in;
    in.open(path);

    if (!in.is_open())
    {
        cout << "Failed opening file!" << endl;
        return -1;
    }

    string str;
    switch (readType)
    {
    // read char by char
    case 0:
        char ch;
        while (in.get(ch))
        {
            cout << ch;
        }
        break;
    // read word by word
    case 1:
        while (!in.eof())
        {
            // if not reseting - last word will be printed twice
            str = "";
            // >> operator reads to the first escape character (like whitespace)
            in >> str;
            cout << str << endl;
        }

        break;
    // read line by line
    case 2:
        while (!in.eof())
        {
            str = "";
            // in.getline(char array, read count) isn't comfortable to use

            // better alternative from namespace std
            getline(in, str);
            cout << str << endl;
        }
        break;

    default:
        break;
    }

    in.close();
    return 0;
}
