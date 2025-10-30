#include <iostream>
using namespace std;

class Ride {
public:
    virtual void calculateFare(float distance) { 
        cout << "Calculating fare for ride..." << endl;
    }
};

class BikeRide : public Ride {
public:
    void calculateFare(float distance) override {
        float rate_per_km = 5.0;
        cout << "Bike Ride Fare: ₹" << rate_per_km * distance << endl;
    }
};

class CarRide : public Ride {
public:
    void calculateFare(float distance) override {
        float rate_per_km = 10.0; 
        cout << "Car Ride Fare: ₹" << rate_per_km * distance << endl;
    }
};

class AutoRide : public Ride {
public:
    void calculateFare(float distance) override {
        float rate_per_km = 8.0; 
        cout << "Auto Ride Fare: ₹" << rate_per_km * distance << endl;
    }
};

int main() {
    float distance;
    cout << "Enter distance travelled (in km): ";
    cin >> distance;

    Ride* rides[3];
    rides[0] = new BikeRide();
    rides[1] = new CarRide();
    rides[2] = new AutoRide();

    cout << "\n--- Ride Fare Details ---\n";

    for (int i = 0; i < 3; i++) {
        rides[i]->calculateFare(distance);
    }

    for (int i = 0; i < 3; i++) {
        delete rides[i];
    }

    return 0;
}
