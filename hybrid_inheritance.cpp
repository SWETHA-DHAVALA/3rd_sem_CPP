#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void info() {
        cout << "This is a person." << endl;
    }
};

// Derived 1 (single inheritance)
class Employee : public Person {
public:
    void work() {
        cout << "Employee works." << endl;
    }
};

// Derived 2 (multiple inheritance)
class Manager : public Employee {
public:
    void manage() {
        cout << "Manager manages." << endl;
    }
};

int main() {
    Manager m;
    m.info();    // Person
    m.work();    // Employee
    m.manage();  // Manager
    return 0;
}
