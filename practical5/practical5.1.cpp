#include <iostream>

using namespace std;

class Student {
   private:
    string uid;
    string name;

   protected:
    void setDetails() {
        cout << "Enter UID: ";
        cin >> uid;
        cout << "Enter Name: ";
        cin >> name;
    }
    void showStudentDetails() {
        cout << "UID: " << uid << endl;
        cout << "Name: " << name << endl;
    }

   public:
    Student() {
        setDetails();
    }
};

class Academic : virtual public Student {
   private:
    int sub1;
    int sub2;

   protected:
    void setMarks() {
        cout << "Enter marks of subject 1: ";
        cin >> sub1;
        cout << "Enter marks of subject 2: ";
        cin >> sub2;
    }
    int getSub1() {
        return sub1;
    }
    int getSub2() {
        return sub2;
    }
    void showAcademicDetails() {
        cout << "Subject 1: " << sub1 << endl;
        cout << "Subject 2: " << sub2 << endl;
    }

   public:
    Academic() {
        setMarks();
    }
};

class Sport : virtual public Student {
   private:
    int score;

   public:
    Sport() {
        setDetails();
    }

   protected:
    void setDetails() {
        cout << "Enter Score: ";
        cin >> score;
    }
    void showSportDetails() {
        cout << "Score: " << score << endl;
    }
    int getScore() {
        return score;
    }
};

class Result : public Academic, public Sport {
   public:
    void showDetails() {
        showStudentDetails();
        showAcademicDetails();
        showSportDetails();
        int obtainedMarks = getSub1() + getSub2() + getScore();
        cout << "Obtained: " << obtainedMarks << endl;
        cout << "Percentage: " << obtainedMarks * 100 / 210.0 << endl;
    }
};

int main() {
    Result result;
    cout << endl;
    result.showDetails();
    cout << endl
         << "Name: Yash Gupta   UID: 23BCS11317" << endl;
    return 0;
}