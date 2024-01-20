// WAP to create a clas Section401 w/ data members: uid, name, marks and member functions: display(), getInput()
#include <iostream>

using namespace std;

class Section401 {
   public:
    string uid;
    string name;
    int marks;

    void display() {
        cout << endl
             << "Name:\t" << name << endl
             << "UID:\t" << uid << endl
             << "Marks:\t" << marks << endl
             << endl;
    }
    void getInput() {
        cout << "Enter UID: ";
        cin >> uid;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

int main() {
    Section401 salim;

    salim.getInput();

    salim.display();

    cout
        << "Name: Yash Gupta   UID: 23BCS11317" << endl;

    return 0;
}