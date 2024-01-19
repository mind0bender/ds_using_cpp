// addition of 2 numbers a and b
#include <iostream>

using namespace std;

int sum(int, int);

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "sum of " << a << " and " << b << " is " << sum(a, b) << endl;
    cout << "Name: Yash Gupta   UID: 23BCS11317" << endl;
    return 0;
}

int sum(int x, int y) {
    return x + y;
}