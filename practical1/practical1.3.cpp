// to print the fibonacci series

#include <iostream>

using namespace std;

int main() {
    int nTerms;
    cout << "Enter number of terms: ";
    cin >> nTerms;
    int f1 = 0, f2 = 1;
    cout << "Fibonacci series: ";
    cout << f1 << ' ' << f2 << ' ';
    while (nTerms - 2) {
        int f3 = f1 + f2;
        cout << f3 << " ";
        f1 = f2;
        f2 = f3;
        nTerms--;
    }
    cout << endl
         << endl
         << "Name: Yash Gupta   UID: 23BCS11317" << endl;
    return 0;
}