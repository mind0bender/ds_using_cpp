#include <iostream>

using namespace std;

class Student {
   protected:
    string uid;
    string name;

   public:
    Student() {
        uid = "N/A";
        name = "N/A";
    }
    Student(string uid, string name) : uid(uid), name(name) {
    }
    void setDetails() {
        cout << "Enter UID: ";
        cin >> uid;
        cout << "Enter Name: ";
        cin >> name;
    }
    string getUID() {
        return uid;
    }
    string getName() {
        return name;
    }
    void showDetails() {
        cout << "UID: " << uid << endl;
        cout << "Name: " << name << endl;
    }
};

class Academic : public Student {
   private:
    int sub1;
    int sub2;
    int sub3;

   public:
    Academic(Student &student) {
        uid = student.getUID();
        name = student.getName();
    }
    void setMarks() {
        cout << "Enter marks of subject 1: ";
        cin >> sub1;
        cout << "Enter marks of subject 2: ";
        cin >> sub2;
        cout << "Enter marks of subject 3: ";
        cin >> sub3;
    }
    void getPercentage() {
        cout << "Percentage: " << (sub1 + sub2 + sub3) / 3.0 << endl;
    }
};

class Accounts : public Student {
   private:
    int fees;
    int paid;

   public:
    Accounts(Student &student) {
        uid = student.getUID();
        name = student.getName();
    }
    void setFees(int totalFees) {
        fees = totalFees;
    }
    void payFees(int payment) {
        paid += payment;
    }
    void showFees() {
        cout << "Fees: " << fees << endl;
        cout << "Paid: " << paid << endl;
        cout << "Remaining: " << fees - paid << endl;
    }
};

int main() {
    Student salim;
    Academic salimAcademic = Academic(salim);
    Accounts salimAccounts = Accounts(salim);

    salim.setDetails();
    salimAcademic.setMarks();
    salimAccounts.setFees(12'00'000);
    salimAccounts.payFees(7'20'000);

    salim.showDetails();
    salimAccounts.showFees();
    salimAcademic.getPercentage();

    cout << "Name: Yash Gupta   UID: 23BCS11317" << endl;

    return 0;
}