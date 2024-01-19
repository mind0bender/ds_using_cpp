// do not write in practical file.
// displaying array elements in cpp
#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Name: Yash Gupta   UID: 23BCS11317" << endl;

    return 0;
}