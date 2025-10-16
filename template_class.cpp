#include <iostream>
using namespace std;

// Template class
template <typename T>
class Box {
private:
    T content;  // Can hold any data type

public:
    // Constructor
    Box(T c) : content(c) {}

    // Setter
    void setContent(T c) {
        content = c;
    }

    // Getter
    T getContent() const {
        return content;
    }

    // Display
    void display() const {
        cout << "Content: " << content << endl;
    }
};

int main() {
    // Box of int
    Box<int> intBox(123);
    intBox.display();

    // Box of double
    Box<double> doubleBox(45.67);
    doubleBox.display();

    // Box of string
    Box<string> stringBox("Hello Templates!");
    stringBox.display();

    // Modify content
    intBox.setContent(456);
    cout << "After modifying intBox:" << endl;
    intBox.display();

    return 0;
}
