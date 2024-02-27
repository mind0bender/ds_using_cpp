// wap to delete an element in a linear array at a given position

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

    int pos;
    cout << "Enter position to delete element: ";
    cin >> pos;

    for (int i = pos - 1; i < n; i++) {
        LA[i] = LA[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cout << LA[i] << endl;
    }
    cout << "Name: Yash Gupta   UID: 23BCS11317" << endl;

    return 0;
}