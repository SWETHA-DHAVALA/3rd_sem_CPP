#include <iostream>
using namespace std;

class Student {
private:
    // Private data members (not accessible outside the class directly)
    int rollNumber;
    float marks;

public:
    // Public data member (accessible outside the class)
    string name;

    // Public member functions to set and get private data
    void setDetails(int r, float m, string n) {
        rollNumber = r;
        marks = m;
        name = n;
    }

    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    // Accessing public member directly
    s.name = "Pooja";

    // Accessing private members directly is NOT allowed:
    // s.rollNumber = 101;  ?  This will cause a compilation error
    // s.marks = 95.5;      ?

    // Instead, use public functions to access private data
    s.setDetails(101, 95.5, "Pooja");
    s.displayDetails();

    // Displaying public data member directly
    cout << "\nAccessing public member directly: " << s.name << endl;

    return 0;
}
