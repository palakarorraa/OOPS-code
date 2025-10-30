#include<iostream>
using namespace std;
class Vehicle
{
public:
    int speed,fuel;
    Vehicle(int s, int f)
    {
        speed=s;
        fuel=f;
        cout<<"Vehicle Details: "<<endl;
        cout<<"Speed is: "<<speed<<"km/h"<<endl;
        cout<<"Fuel is: "<<fuel<<"liters"<<endl;
    }
};
class Car : public Vehicle
{
public:
    Car(int s, int f) : Vehicle(s, f) {}
    void doors()
    {
        cout<<"Door must be closed while driving"<<endl;
    }
};
class Bike : public Vehicle
{
public:
    Bike(int s, int f) : Vehicle(s, f) {}
    void helmetRequired()
    {
        cout<<"Wearing helmet is compulsory"<<endl;
    }
};
int main()
{
    Car c1(120,40);
    c1.doors();
    cout<<endl;
    Bike b1(90,15);
    b1.helmetRequired();
    return 0;
}