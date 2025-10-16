#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Using template with int
    int x = 5, y = 10;
    cout << "Sum of integers: " << add(x, y) << endl;
    cout << "Maximum of integers: " << maximum(x, y) << endl;

    // Using template with float
    float f1 = 3.5, f2 = 2.7;
    cout << "\nSum of floats: " << add(f1, f2) << endl;
    cout << "Maximum of floats: " << maximum(f1, f2) << endl;

    // Using template with double
    double d1 = 12.34, d2 = 56.78;
    cout << "\nSum of doubles: " << add(d1, d2) << endl;
    cout << "Maximum of doubles: " << maximum(d1, d2) << endl;

    return 0;
}
