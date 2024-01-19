// WAP to find avg of 5 subjects of a student in a class

#include <iostream>

using namespace std;

int main() {
    int marks[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks of subject" << i + 1 << ": ";
        cin >> marks[i];
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    float avg = sum / 5.0;
    cout << "average of marks: " << avg << endl;
    cout << "Name: Yash Gupta   UID: 23BCS11317" << endl;
    return 0;
}