#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) : name(n), age(a) {}

    // Display function
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Setters
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }
};

int main() {
    // Creating an object
    Student s1("Alice", 20);

    // Pointer to object
    Student* ptr = &s1;

    cout << "Accessing object using pointer:" << endl;
    ptr->display();  // Use arrow operator to access members

    // Modifying object using pointer
    ptr->setName("Bob");
    ptr->setAge(22);

    cout << "\nAfter modifying using pointer:" << endl;
    ptr->display();

    // Dynamic allocation of an object
    Student* ptr2 = new Student("Charlie", 25);
    cout << "\nDynamically allocated object:" << endl;
    ptr2->display();

    // Modifying dynamically allocated object
    ptr2->setName("David");
    ptr2->setAge(28);
    cout << "\nAfter modification:" << endl;
    ptr2->display();

    // Free dynamically allocated memory
    delete ptr2;

    return 0;
}
