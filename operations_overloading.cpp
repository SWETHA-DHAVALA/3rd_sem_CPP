#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Display function
    void display() const {
        cout << "Value: " << value << endl;
    }

    // **Unary operator overloading** (negation - `-`)
    Number operator-() const {
        return Number(-value);
    }

    // **Binary operator overloading** (addition - `+`)
    Number operator+(const Number& n) const {
        return Number(value + n.value);
    }

    // **Binary operator overloading** (subtraction - `-`)
    Number operator-(const Number& n) const {
        return Number(value - n.value);
    }
};

int main() {
    Number n1(10), n2(5);

    cout << "Original numbers:" << endl;
    n1.display();
    n2.display();

    // Using binary operator +
    Number sum = n1 + n2;
    cout << "After addition:" << endl;
    sum.display();

    // Using binary operator -
    Number diff = n1 - n2;
    cout << "After subtraction:" << endl;
    diff.display();

    // Using unary operator -
    Number neg = -n1;
    cout << "After unary negation of n1:" << endl;
    neg.display();

    return 0;
}
