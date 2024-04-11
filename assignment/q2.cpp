/*WAP and algo and program insert a node at the end of the Linked List. Explain
 * with table.
 */

#include <iostream>

using namespace std;

class Node {
  Node *head = NULL;

 public:
  int data = 0;
  Node *next = NULL;
  void insert(int data) {
    Node *newNode = new Node();
    newNode->data = data;
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
  void display() {
    Node *temp = head;
    while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main() {
  Node head;
  head.insert(1);
  head.insert(0);
  head.insert(5);
  head.insert(8);
  head.insert(9);
  head.display();
  cout << "Yash Gupta\t23BCS11317" << endl;
  return 0;
}

/*
pseudo code for insert function at the end of the linked list:

1. Start
2. Create a newNode
3. Assign the data to the newNode
4. If the head is NULL, assign the newNode to the head
5. Else, create a temp node and assign the head to it
6. while the temp->next node is not NULL
7. set temp->next = newNode
8. Set temp = temp->next node
9. End
*/