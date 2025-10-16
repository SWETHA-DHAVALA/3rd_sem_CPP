#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;

    Person(string n = "") : name(n) {
        cout << "Person constructor called." << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

// Derived class 1 (virtual inheritance)
class Employee : virtual public Person {
public:
    int employeeID;

    Employee(int id = 0) : employeeID(id) {
        cout << "Employee constructor called." << endl;
    }
};

// Derived class 2 (virtual inheritance)
class Student : virtual public Person {
public:
    int rollNo;

    Student(int r = 0) : rollNo(r) {
        cout << "Student constructor called." << endl;
    }
};

// Derived class from both Employee and Student
class WorkingStudent : public Employee, public Student {
public:
    WorkingStudent(string n, int id, int r) : Person(n), Employee(id), Student(r) {
        cout << "WorkingStudent constructor called." << endl;
    }

    void displayDetails() {
        display();  // No ambiguity because Person is a virtual base
        cout << "Employee ID: " << employeeID << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    WorkingStudent ws("Alice", 101, 202);
    cout << "\nDisplaying WorkingStudent details:" << endl;
    ws.displayDetails();

    return 0;
}
