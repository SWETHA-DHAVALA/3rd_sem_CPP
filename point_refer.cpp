#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;

public:
    // Constructor using 'this' pointer
    Student(int rollNumber, string name) {
        this->rollNumber = rollNumber;  // 'this' refers to the current object
        this->name = name;
    }

    // Member function using 'this' pointer
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << this->rollNumber << endl;
        cout << "Name: " << this->name << endl;
    }

    // Function returning the current object using 'this'
    Student& changeName(string newName) {
        this->name = newName;
        return *this;  // returning the current object
    }
};

int main() {
    // Creating an object
    Student s1(101, "Pooja");

    // Display initial details
    s1.display();

    // Using 'this' pointer to update and chain calls
    s1.changeName("Pooja Reddy").display();

    return 0;
}
