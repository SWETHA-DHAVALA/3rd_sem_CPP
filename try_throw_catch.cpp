#include <iostream>
using namespace std;

// Function to divide two numbers
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Error: Division by zero!"); // Throw exception
    }
    return numerator / denominator;
}

int main() {
    double a, b;

    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;

    try {
        // Try block: code that may throw an exception
        double result = divide(a, b);
        cout << "Result: " << result << endl;
    }
    catch (runtime_error &e) {
        // Catch block: handle runtime_error exceptions
        cout << e.what() << endl;
    }
    catch (...) {
        // Catch all other exceptions
        cout << "An unknown error occurred!" << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}
