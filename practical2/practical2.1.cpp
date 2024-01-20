// WAP to make an object and a class
#include <iostream>

using namespace std;

class Section401 {
   public:
    string uid;
    string name;
    int marks;
};

int main() {
    Section401 salim;

    cout << "Enter UID: ";
    cin >> salim.uid;
    cout << "Enter Name: ";
    cin >> salim.name;
    cout << "Enter Marks: ";
    cin >> salim.marks;

    cout << endl
         << "Name:\t" << salim.name << endl
         << "UID:\t" << salim.uid << endl
         << "Marks:\t" << salim.marks << endl
         << endl;
    cout
        << "Name: Yash Gupta   UID: 23BCS11317" << endl;

    return 0;
}