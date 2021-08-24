#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out;
    const string path = "myFile.txt";

    // second param is for appeding data to file
    out.open(path, fstream::app);

    if (!out.is_open())
    {
        cout << "Failed opening file!" << endl;
        return -1;
    }

    cout << "Enter number, that will go to " << path << endl;
    int num;
    cin >> num;
    out << num << endl;

    out.close();
    return 0;
}