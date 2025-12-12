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

    float GetSpeed()
    {
        return speed;
    }

    string GetModel()
    {
        return model;
    }

    void displayDetails()
    {
        cout << "Model: " << model << endl;
        cout << "Speed: " << speed << " km/h" << endl;
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
         << "Car Details:" << endl;
    c.displayDetails();
    cout << "Time Taken for " << distance << " km: "
         << c.calculateTime(distance) << " hours" << endl;

    cout << endl
         << "Bike Details:" << endl;
    b.displayDetails();
    cout << "Time Taken for " << distance << " km: "
         << b.calculateTime(distance) << " hours" << endl;

    return 0;
}
