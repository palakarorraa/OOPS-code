#include <iostream>
using namespace std;

class Device {
public:
    virtual void turnOn() {
        cout << "Device is turned ON." << endl;
    }

    void turnOff() {
        cout << "Device is turned OFF." << endl;
    }
};

class Light : public Device {
public:
    void turnOn() override {
        cout << "Light is ON." << endl;
    }
};

class Fan : public Device {
public:
    void turnOn() override {
        cout << "Fan speed set to 3." << endl;
    }
};

class AC : public Device {
public:
    void turnOn() override {
        cout << "AC temperature set to 22°C." << endl;
    }
};

int main() {
    Light light;
    Fan fan;
    AC ac;

    Device* devices[3];

    devices[0] = &light;
    devices[1] = &fan;
    devices[2] = &ac;

    cout << "Demonstrating Runtime Polymorphism:\n" << endl;

    for (int i = 0; i < 3; i++) {
        devices[i]->turnOn(); 
        devices[i]->turnOff();
        cout << endl;
    }

    return 0;
}
