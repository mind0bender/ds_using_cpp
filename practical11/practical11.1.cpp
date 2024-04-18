// WAP to using linked list w/ following operations:
/*                               \
    insert a node at begining    \
    delete a node at begining    \
    display all elements of a LL \
*/

#include <iostream>

using namespace std;

class LinkedList {
 public:
  LinkedList* head;
  int data;
  LinkedList* next;

  void create(int val) {
    LinkedList* newNode = new LinkedList(val);
    newNode->next = head;
    head = newNode;
  }
  void deleteNode() {
    if (head == nullptr) {
      cout << "Underflow: List is empty" << endl;
    } else {
      LinkedList* temp = head;
      head = temp->next;
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
  LinkedList* head = new LinkedList();
  cout << "0. Exit | " << "1. Insert | " << "2. Delete | " << "3. Display"
       << endl;
  while (true) {
    cout << ">>> ";

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
        head->create(val);
        break;
      case 2:
        head->deleteNode();
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

/*
pseudo code for insert at the beginning of the linked list:
  create newNode with the given value
  set newNode->next = head
  set the head = newNode
pseudo code for deleting at the beginning of the linked list:
  if head == nullptr
      write "Underflow"
  else
    LinkedList* temp = head;
    head = temp->next;
    delete temp;
pseudocode for displaying all elements in a linked list:
  set temp=head
  repeat step  while temp!=null
    write temp->data
    set temp = temp->next
*/