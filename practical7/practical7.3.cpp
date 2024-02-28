// binary search

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

    int search;
    cout << "Enter element to search: ";
    cin >> search;

    int low = 0, high = n - 1, mid;
    mid = (low + high) / 2;

    if (LA[mid] == search) {
        cout << "Element found at position " << mid + 1 << endl;
    } else {
        cout << "Element not found" << endl;
    }
    cout << "Name: Yash Gupta   UID: 23BCS11317" << endl;

    return 0;
}