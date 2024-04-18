/*
sorting a list of student scores.
Lets consider a scenario where a list of student scores need to be sort
with roll no.

search for a student score with a given roll no.
*/

#include <iostream>

using namespace std;

class Student {
  int roll_no;
  float score;

 public:
  Student(int r, float s) : roll_no(r), score(s) {}

  int getRollNo() { return roll_no; }

  int getScore() { return score; }

  void display() {
    cout << "Roll No: " << roll_no << "\tScore: " << score << endl;
  }
};

class Node {
 public:
  Student *student;
  Node *next;
};

class LinkedList {
  Node *head;

 public:
  LinkedList() : head(NULL) {}

  void insert(Student *student) {
    Node *newNode = new Node();
    newNode->student = student;
    newNode->next = NULL;

    if (head == NULL) {
      head = newNode;
    } else {
      Node *temp = head;
      while (temp->next != NULL) {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }

  void sort() {
    Node *i, *j;
    Student *temp;
    for (i = head; i != NULL; i = i->next) {
      for (j = i->next; j != NULL; j = j->next) {
        if (i->student->getScore() > j->student->getScore()) {
          temp = i->student;
          i->student = j->student;
          j->student = temp;
        }
      }
    }
  }

  Student *search(int roll_no) {
    Node *temp = head;
    while (temp != NULL) {
      if (temp->student->getRollNo() == roll_no) {
        return temp->student;
      }
      temp = temp->next;
    }
    return NULL;
  }

  void display() {
    Node *temp = head;
    while (temp != NULL) {
      temp->student->display();
      temp = temp->next;
    }
  }
};

int main() {
  LinkedList list;
  bool exit = false;
  cout << "0. Exit\t|\t1.Insert\t|\t2.Sort\t|\t3.Display\t|\t4.Search" << endl;
  while (!exit) {
    int choice;
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice) {
      case 0:
        exit = true;
        break;
      case 1: {
        int roll_no;
        float score;
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Score: ";
        cin >> score;
        list.insert(new Student(roll_no, score));
        break;
      }
      case 2:
        list.sort();
        break;
      case 3:
        list.display();
        break;
      case 4: {
        int roll_no;
        cout << "Enter Roll No: ";
        cin >> roll_no;
        Student *student = list.search(roll_no);
        if (student != NULL) {
          student->display();
        } else {
          cout << "Student not found" << endl;
        }
        break;
      }
      default:
        cout << "Invalid choice" << endl;
    }
  }
  cout << "Yash Gupta\t23BCS11317" << endl;

  return 0;
}