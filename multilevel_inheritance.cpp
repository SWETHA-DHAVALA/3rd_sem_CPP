#include <iostream>
using namespace std;

class Vehicle {
public:
    void info() {
        cout << "This is a vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void carType() {
        cout << "This is a car." << endl;
    }
};

class SportsCar : public Car {
public:
    void speed() {
        cout << "Sports car is fast." << endl;
    }
};

int main() {
    SportsCar sc;
    sc.info();      // Vehicle
    sc.carType();   // Car
    sc.speed();     // SportsCar
    return 0;
}
