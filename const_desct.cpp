#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called! Object created for " << name << endl;
    }

    // Member function to display details
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called! Object destroyed for " << name << endl;
    }
};

int main() {
    // Creating objects
    Student s1("Pooja", 21);
    Student s2("Rahul", 22);

    // Displaying details
    s1.display();
    s2.display();

    // Objects go out of scope here, destructor will be called automatically
    return 0;
}
