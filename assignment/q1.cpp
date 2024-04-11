/*WAP and pseudo code and program delete a node from middle of the Linked List.
 * Explain with table.
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
  void deleteNode(int data) {
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL) {
      if (temp->data == data) {
        if (prev == NULL) {
          head = temp->next;
        } else {
          prev->next = temp->next;
        }
        delete temp;
        return;
      }
      prev = temp;
      temp = temp->next;
    }
  }
};

int main() {
  Node head;
  head.insert(1);
  head.insert(0);
  head.insert(317);
  head.insert(5);
  head.insert(8);
  head.insert(9);
  head.display();
  head.deleteNode(317);
  head.display();
  cout << "Yash Gupta\t23BCS11317" << endl;
  return 0;
}

/*
pseudo code for deleteNode function a node from the middle

1. Start
2. Create a Node pointer temp and initialize it to head
3. Create a Node pointer prev and initialize it to NULL
4. Loop steps 5, 6,  while temp is not NULL
5. If temp->data is equal to data
6. If prev is NULL
7. Set head = temp->next
    end of if
8. Else
9. Set prev->next to temp->next
    end of else
10. Delete temp
11. Return
    end of if
12. Set prev = temp
13. Set temp = temp->next
14. End
*/