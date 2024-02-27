// traversing a LA

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
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cout << LA[i] << endl;
    }
    cout << "Name: Yash Gupta   UID: 23BCS11317" << endl;

    return 0;
}