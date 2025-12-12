#include <iostream>

using namespace std;

class Vehicle
{
private:
    string model;
    float speed;

public:
    void SetData(string m, float s)
    {
        model = m;
        speed = s;
    }
    string GetModel()
    {
        return model;
    }
    float GetSpeed()
    {
        return speed;
    }
};

class Car : public Vehicle
{
public:
    float calculateTime(float distance)
    {
        return distance / GetSpeed();
    }
};

class Bike : public Vehicle
{
public:
    float calculateTime(float distance)
    {
        return distance / GetSpeed();
    }
};

int main()
{
    Car c;
    Bike b;

    string model;
    float speed, distance;

    cout << "Enter distance to travel (km): ";
    cin >> distance;

    cin.ignore();
    cout << endl
         << "Enter Car Model: ";
    getline(cin, model);
    cout << "Enter Car Speed (km/h): ";
    cin >> speed;
    c.SetData(model, speed);

    cin.ignore();
    cout << endl
         << "Enter Bike Model: ";
    getline(cin, model);
    cout << "Enter Bike Speed (km/h): ";
    cin >> speed;
    b.SetData(model, speed);

    cout << endl
         << "Time Calculation" << endl;
    cout << "Car Model: " << c.GetModel() << endl;
    cout << "Time: " << c.calculateTime(distance) << " hours" << endl;

    cout <<endl<< "Bike Model: " << b.GetModel()<<endl;
    cout << "Time: " << b.calculateTime(distance) << " hours" << endl;

    return 0;
}
