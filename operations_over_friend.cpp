#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) : value(v) {}

    // Display function
    void display() const {
        cout << "Value: " << value << endl;
    }

    // **Friend function for unary operator overloading (-)**
    friend Number operator-(const Number& n);

    // **Friend function for binary operator overloading (+)**
    friend Number operator+(const Number& n1, const Number& n2);

    // **Friend function for binary operator overloading (-)**
    friend Number operator-(const Number& n1, const Number& n2);
};

// Unary operator: negation
Number operator-(const Number& n) {
    return Number(-n.value);
}

// Binary operator: addition
Number operator+(const Number& n1, const Number& n2) {
    return Number(n1.value + n2.value);
}

// Binary operator: subtraction
Number operator-(const Number& n1, const Number& n2) {
    return Number(n1.value - n2.value);
}

int main() {
    Number n1(15), n2(7);

    cout << "Original numbers:" << endl;
    n1.display();
    n2.display();

    // Binary addition
    Number sum = n1 + n2;
    cout << "After addition:" << endl;
    sum.display();

    // Binary subtraction
    Number diff = n1 - n2;
    cout << "After subtraction:" << endl;
    diff.display();

    // Unary negation
    Number neg = -n1;
    cout << "After unary negation of n1:" << endl;
    neg.display();

    return 0;
}
