#include <iostream>
#include <fstream>

using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point()
    {
        x = y = 0;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void print()
    {
        cout << "x - " << x << "\t y = " << y << endl;
    }
};

int main()
{
    const string path = "myFile.txt";
    Point point(10, 9);

    ofstream out;

    out.open(path, ofstream::app);
    if (!out.is_open())
    {
        cout << "Failed opening file!" << endl;
        return -1;
    }
    out.write((char *)&point, sizeof(Point));
    out.close();

    ifstream in;
    in.open(path);
    if (!in.is_open())
    {
        cout << "Failed opening file!" << endl;
        return -1;
    }

    Point pnt;
    cout << "Start reading points" << endl;
    while (in.read((char *)&pnt, sizeof(Point)))
    {
        pnt.print();
    }
    cout << "End reading points" << endl;

    in.close();

    return 0;
}