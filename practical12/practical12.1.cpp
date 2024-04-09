#include <iostream>

using namespace std;

class LinkedList {
 public:
  char data;
  LinkedList* head = NULL;
  LinkedList* next = NULL;
  void create(char val) {
    LinkedList* newNode = new LinkedList(val);
    newNode->next = head;
    head = newNode;
  }
  void display() {
    LinkedList* temp = head;
    while (temp) {
      cout << temp->data << ' ';
      temp = temp->next;
    }
    cout << endl;
  }

  bool has(char search) {
    LinkedList* temp = head;
    while (temp) {
      if (temp->data == search) {
        return true;
      }
      temp = temp->next;
    }
    return false;
  }

  LinkedList(char val) { this->data = val; }
  LinkedList() {}
};

int main() {
  cout << "yay: ";
  LinkedList* yay = new LinkedList();
  yay->create('d');
  yay->create('b');
  yay->create('a');
  yay->create('c');
  yay->display();
  const bool hasB = yay->has('b');
  if (hasB) {
    cout << "found!" << endl;
  } else {
    cout << "not found!" << endl;
  }
  cout << "Yash Gupta\t23BCS11317" << endl;

  return 0;
}