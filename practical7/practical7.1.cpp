// WAP to perform liniear search

// WAP to perform liniear search

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
    int found = -1;

    for (int i = 0; i < n; i++) {
        if (LA[i] == ele) {
            found = i;
            break;
        }
    }
    if (found != -1) {
        cout << "Element found at position " << found + 1 << endl;
    } else {
        cout << "Element not found" << endl;
    }
    cout << "Name: Yash Gupta   UID: 23BCS11317" << endl;

    return 0;
}