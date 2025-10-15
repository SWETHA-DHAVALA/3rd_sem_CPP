#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class Student {
private:
    char* name;
    int age;

public:
    // Parameterized constructor
    Student(const char* n, int a) {
        age = a;
        name = new char[strlen(n) + 1]; // Dynamic memory allocation
        strcpy(name, n);
        cout << "Parameterized constructor called for " << name << endl;
    }

    // Copy constructor (deep copy)
    Student(const Student &s) {
        age = s.age;
        name = new char[strlen(s.name) + 1]; // Allocate new memory
        strcpy(name, s.name);
        cout << "Copy constructor called for " << name << endl;
    }

    // Display function
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
        delete[] name; // Free dynamically allocated memory
    }
};

int main() {
    // Create object using parameterized constructor
    Student s1("Pooja", 21);
    s1.display();

    // Create object using copy constructor
    Student s2 = s1; // or Student s2(s1);
    s2.display();

    return 0;
}
