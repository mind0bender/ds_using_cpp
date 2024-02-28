// wap to insert an element in a linear array at a given position

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

    int pos, ele;
    cout << "Enter position to insert element: ";
    cin >> pos;
    cout << "Enter element to insert: ";
    cin >> ele;

    for (int i = n; i >= pos; i--) {
        LA[i] = LA[i - 1];
    }
    LA[pos - 1] = ele;
    n++;

    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cout << LA[i] << endl;
    }
    cout << "Name: Yash Gupta   UID: 23BCS11317" << endl;

    return 0;
}

// algorithm

// 1. Start
// 2. Take input for length of array
// 3. Take input for elements of array
// 4. Take input for position to insert element
// 5. Take input for element to insert
// 6. Shift elements to the right from the given position
// 7. Insert the element at the given position
// 8. Increment the length of the array
// 9. Print the array
// 10. End
