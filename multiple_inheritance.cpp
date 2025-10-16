#include <iostream>
using namespace std;

class Engine {
public:
    void startEngine() {
        cout << "Engine starts." << endl;
    }
};

class Wheels {
public:
    void rotateWheels() {
        cout << "Wheels are rotating." << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

int main() {
    Car c;
    c.startEngine();
    c.rotateWheels();
    c.drive();
    return 0;
}
