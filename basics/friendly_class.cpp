#include <iostream>

using namespace std;

class Human;
class Apple;

class Apple
{
    friend Human; // Here

private:
    int weight;
    string color;

public:
    Apple(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
    }
};

class Human
{
public:
    void takeApple(Apple &apple);
    void eatApple(Apple &apple)
    {
        cout << "Eat apple with color = " << apple.color << endl;
    }
};

// move method impl from class just for learning
void Human::takeApple(Apple &apple)
{
    cout << "TakeApple weight = " << apple.weight << " color = " << apple.color << endl;
}

int main()
{
    Apple apple(150, "red");
    Human human;
    human.takeApple(apple);
}