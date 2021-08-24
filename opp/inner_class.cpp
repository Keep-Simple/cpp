#include <iostream>

using namespace std;

class Image
{
public:
    void getImageInfo()
    {
        for (int i = 0; i < LENGHT; i++)
        {
            cout << pixels[i].getInfo() << endl;
        }
    }

private:
    class Pixel
    {

    public:
        Pixel()
        {
            r = g = b = 0;
        }
        Pixel(int r, int g, int b)
        {
            this->r = r;
            this->g = g;
            this->b = b;
        }

        string getInfo()
        {
            return "Pixel: r=" + to_string(r) + " g=" + to_string(g) + " b=" + to_string(b);
        }

    private:
        int r;
        int g;
        int b;
    };

    static const int LENGHT = 5;

    Pixel pixels[LENGHT] = {
        Pixel(0, 4, 5),
        Pixel(0, 4, 5),
        Pixel(0, 4, 5),
        Pixel(0, 4, 5),
        Pixel(0, 4, 5),
    };
};

int main()
{
    Image image;
    image.getImageInfo();
}
