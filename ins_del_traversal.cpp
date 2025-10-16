#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    // ---------------------------
    // VECTOR EXAMPLE
    // ---------------------------
    cout << "VECTOR EXAMPLE\n" << endl;

    vector<int> vec;

    // Insertion
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "Vector after insertion: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;

    // Deletion (remove last element)
    vec.pop_back();
    cout << "Vector after deletion (pop_back): ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;

    // Traversal using index
    cout << "Vector traversal using index: ";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n" << endl;

    // ---------------------------
    // LIST EXAMPLE
    // ---------------------------
    cout << "LIST EXAMPLE\n" << endl;

    list<int> lst;

    // Insertion
    lst.push_back(100);
    lst.push_back(200);
    lst.push_front(50);  // Insert at beginning

    cout << "List after insertion: ";
    for (int l : lst) {
        cout << l << " ";
    }
    cout << endl;

    // Deletion
    lst.pop_back();       // Remove last element
    lst.pop_front();      // Remove first element
    cout << "List after deletion (pop_front & pop_back): ";
    for (int l : lst) {
        cout << l << " ";
    }
    cout << endl;

    // Traversal using iterator
    cout << "List traversal using iterator: ";
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
