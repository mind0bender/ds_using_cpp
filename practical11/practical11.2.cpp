// WAP to use linked list w/ following operations:
/*                               \
    insert a node at begining    \
    delete a node at begining    \
    display all elements of a LL \
*/

#include <iostream>

using namespace std;

class LinkedList {
 public:
  LinkedList* head = nullptr;
  int data = 0;
  LinkedList* next = nullptr;

  void createEnd(int val) {
    LinkedList* temp = new LinkedList(val);
    if (head == nullptr) {
      head = temp;
    } else {
      LinkedList* last = head;
      while (last->next != nullptr) {
        last = last->next;
      }
      last->next = temp;
    }
  }
  void deleteEnd() {
    if (head == nullptr) {
      cout << "Underflow: List is empty" << endl;
    } else {
      LinkedList* temp = head;
      LinkedList* prev = nullptr;
      while (temp->next != nullptr) {
        prev = temp;
        temp = temp->next;
      }
      if (prev == nullptr) {
        head = nullptr;
      } else {
        prev->next = nullptr;
      }
      delete temp;
    }
  }
  void display() {
    cout << "Elements: ";
    LinkedList* temp = head;
    while (temp != nullptr) {
      cout << temp->data << ' ';
      temp = temp->next;
    }
    cout << endl;
  }
  LinkedList(int val) { data = val; }
  LinkedList() {}
};

int main() {
  LinkedList* head = new LinkedList;
  while (true) {
    cout << "0. Exit | " << "1. Insert | " << "2. Delete | " << "3. Display"
         << endl
         << ">>> ";
    int c;
    cin >> c;
    bool exit = false;
    switch (c) {
      case 0:
        exit = true;
        break;
      case 1:
        int val;
        cout << "Enter value: ";
        cin >> val;
        head->createEnd(val);
        break;
      case 2:
        head->deleteEnd();
        break;
      case 3:
        head->display();
        break;
      default:
        cout << "Invalid Choice: " << c << endl;
        break;
    }
    if (exit) {
      break;
    }
  }

  cout << "Yash Gupta\t23BCS11317" << endl;

  return 0;
}