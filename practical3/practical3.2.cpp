/*
Create a class student w/ data members rollno, name, height, weight.
by defining member functions getStudent() and display() outside the class using array of objects.
*/

#include <iostream>

using namespace std;

class Student {
   private:
    int rollno;
    string name;
    float height;
    float weight;

   public:
    void getStudent();
    void display();
};

void Student::getStudent() {
    cout << "Enter roll no.: ";
    cin >> rollno;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter weight: ";
    cin >> weight;
}
void Student::display() {
    cout << "Roll No.: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
}

int main() {
    Student section_401[2];

    for (int i = 0; i < 2; i++) {
        cout << "Enter data of student" << i + 1 << endl;
        section_401[i].getStudent();
    }
    cout << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Data of student" << i + 1 << endl;
        section_401[i].display();
    }
    return 0;
}
