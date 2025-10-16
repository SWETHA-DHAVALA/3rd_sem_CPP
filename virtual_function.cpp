#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {  // Override base class function
        cout << "Drawing a circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    // Base class pointer
    Shape* shapePtr;

    // Create objects
    Circle c;
    Rectangle r;

    // Pointer points to Circle
    shapePtr = &c;
    cout << "Calling draw() through Shape pointer pointing to Circle:" << endl;
    shapePtr->draw();  // Calls Circle::draw() at runtime

    // Pointer points to Rectangle
    shapePtr = &r;
    cout << "Calling draw() through Shape pointer pointing to Rectangle:" << endl;
    shapePtr->draw();  // Calls Rectangle::draw() at runtime

    return 0;
}
