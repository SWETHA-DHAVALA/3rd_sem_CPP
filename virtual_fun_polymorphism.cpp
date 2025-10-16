#include <iostream>
#include <vector>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Some generic animal sound" << endl;
    }

    // Virtual destructor (good practice for polymorphic base classes)
    virtual ~Animal() {}
};

// Derived class 1
class Dog : public Animal {
public:
    void makeSound() override {  // Override base class function
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows: Meow Meow!" << endl;
    }
};

int main() {
    // Array of base class pointers
    vector<Animal*> animals;

    // Creating derived class objects
    Dog d;
    Cat c;

    // Storing addresses in base class pointer array
    animals.push_back(&d);
    animals.push_back(&c);

    // Runtime polymorphism: calling the correct function at runtime
    cout << "Demonstrating runtime polymorphism:\n" << endl;
    for (Animal* a : animals) {
        a->makeSound();  // Correct derived class function is called dynamically
    }

    return 0;
}
