#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Create a deque of integers
    deque<int> dq;

    // ---------------------------
    // INSERTION OPERATIONS
    // ---------------------------
    dq.push_back(10);   // Insert at the end
    dq.push_back(20);
    dq.push_front(5);   // Insert at the front
    dq.push_front(1);

    cout << "Deque after insertions: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    // ---------------------------
    // DELETION OPERATIONS
    // ---------------------------
    dq.pop_back();     // Remove from the end
    dq.pop_front();    // Remove from the front

    cout << "Deque after deletion (pop_front & pop_back): ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    // ---------------------------
    // ACCESS ELEMENTS
    // ---------------------------
    cout << "First element: " << dq.front() << endl;
    cout << "Last element: " << dq.back() << endl;
    cout << "Element at index 0: " << dq[0] << endl;

    // ---------------------------
    // TRAVERSAL USING ITERATOR
    // ---------------------------
    cout << "Deque traversal using iterator: ";
    for (deque<int>::iterator it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
