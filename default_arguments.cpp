#include <iostream>
using namespace std;

// Function with default arguments
void displayDetails(string name, int age = 18, string city = "Hyderabad") {
    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
}

int main() {
    // Calling function with all arguments
    displayDetails("Pooja", 21, "Chennai");

    // Calling function with 2 arguments (city will take default value)
    displayDetails("Rahul", 22);

    // Calling function with 1 argument (age and city will take default values)
    displayDetails("Sneha");

    return 0;
}
