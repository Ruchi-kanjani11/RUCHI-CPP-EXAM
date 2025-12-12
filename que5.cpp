#include <iostream>
using namespace std;

class Shape
{
private:
    string colour;
    float Area;

protected:
    void setArea(float a) { Area = a; }

public:
    void setColor(string c) { colour = c; }
    string getColor() { return colour; }
    float getArea() { return Area; }
};

class Circle : public Shape
{
public:
    void calculateArea(float r)
    {
        setArea(3.14 * r * r);
    }
};

class Rectangle : public Shape
{
public:
    void calculateArea(float l, float b)
    {
        setArea(l * b);
    }
};

int main()
{
    Circle c;
    Rectangle r;
    c.setColor("Yellow");
    c.calculateArea(7);

    r.setColor("Pink");
    r.calculateArea(2, 4);
    cout << "Circle Color: " << c.getColor() << endl;
    cout << "Circle Area: " << c.getArea() << endl;

    cout <<endl<< "Rectangle Color: " << r.getColor() << endl;
    cout << "Rectangle Area: " << r.getArea() << endl;

    return 0;
}
