#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a map of string keys and integer values
    map<string, int> scores;

    // ---------------------------
    // INSERTION
    // ---------------------------
    scores["Alice"] = 95;        // Using [] operator
    scores.insert({"Bob", 85});  // Using insert() function
    scores["Charlie"] = 78;

    cout << "Map after insertion:\n";
    for (auto &pair : scores) {
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << endl;

    // ---------------------------
    // ACCESS
    // ---------------------------
    cout << "Score of Alice: " << scores["Alice"] << endl;

    // Access a key that does not exist
    cout << "Score of David (before insertion): " << scores["David"] << " (default 0)\n\n";

    // ---------------------------
    // SEARCHING
    // ---------------------------
    string searchKey = "Bob";
    if (scores.find(searchKey) != scores.end()) {
        cout << searchKey << " found with score " << scores[searchKey] << endl;
    } else {
        cout << searchKey << " not found in map" << endl;
    }

    // ---------------------------
    // DELETION
    // ---------------------------
    scores.erase("Charlie");  // Remove by key

    cout << "\nMap after deleting Charlie:\n";
    for (auto &pair : scores) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Clear the entire map
    scores.clear();
    cout << "\nMap after clearing, size = " << scores.size() << endl;

    return 0;
}
