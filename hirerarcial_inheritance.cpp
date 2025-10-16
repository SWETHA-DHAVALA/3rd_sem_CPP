#include <iostream>
using namespace std;

class Shape {
public:
    void info() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.info();  // Shape
    c.draw();  // Circle

    r.info();  // Shape
    r.draw();  // Rectangle

    return 0;
}
