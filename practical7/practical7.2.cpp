// WAP to search an element in an array using linear search w/ duplicate values.

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int LA[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> LA[i];
    }

    int ele;
    cout << "Enter element to search: ";
    cin >> ele;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (LA[i] == ele) {
            found = true;
            cout << "Element found at position " << i + 1 << endl;
        }
    }
    if (!found) {
        cout << "Element not found" << endl;
    }
    cout << "Name: Yash Gupta   UID: 23BCS11317" << endl;

    return 0;
}