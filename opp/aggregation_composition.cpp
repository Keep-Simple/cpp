#include <iostream>

using namespace std;

//aggregation
class Cap
{
public:
    string getColor()
    {
        return color;
    }

private:
    string color = "red";
};

// composition - Brain is incapsulated inside Human. Can't be used separatly
class Human
{
public:
    void think()
    {
        brain.think();
    }
    void inspectTheCap()
    {
        cout << "My cap is " << cap.getColor() << endl;
    }

private:
    class Brain
    {
    public:
        void think()
        {
            cout << "I think" << endl;
        }
    };

    Brain brain;
    Cap cap;
};

class Model
{
public:
    void inspectModel()
    {
        cout << "Cap is " << cap.getColor() << endl;
    }

private:
    Cap cap;
};

int main()
{
    Human human;
    human.think();
    human.inspectTheCap();

    Model model;
    model.inspectModel();
}
