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
  void deleteNode(int val) {
    if (head == nullptr) {
      cout << "Underflow" << endl;
    } else {
      LinkedList* temp = head;
      head = temp->next;
      delete temp;
    }
  }
  void display() {
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
  head->create(10);
  head->create(20);
  head->create(30);
  head->display();
  head->deleteNode(20);
  head->display();
  return 0;
}