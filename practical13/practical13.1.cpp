/*
Stack
wap to perform following operations on a stack
insert
delete
display top element
display status of stack

switch-case:
    case 1: insert(push)
    case 2: delete(pop)
    case 3: status(overflow / underflow)
    case 4: display(peek)
*/

#include <iostream>

using namespace std;

const int maxSize = 10;

class Stack {
  char arr[maxSize];
  int top = -1;

 public:
  void push(char ele) {
    if (top != maxSize - 1) {
      top++;
      arr[top] = ele;
      cout << "Element Inserted" << endl;
    }
  }
  void pop() {
    if (top != -1) {
      top--;
      cout << "Element Deleted" << endl;
    }
  }
  void peek() { cout << arr[top] << endl; }
  void status() {
    switch (top) {
      case -1:
        cout << "Stack is Empty" << endl;
        break;
      case maxSize - 1:
        cout << "Stack is Full" << endl;
        break;
      default:
        cout << "Stack is Something..." << top << endl;
        break;
    }
  }
};

int main() {
  Stack lol;
  while (true) {
    int cmd;
    cout << "\tcase 1: insert\t|\tcase 2: delete\t|\tcase 3: status\t|\tcase "
            "4: display\t|\tcase 5: exit"
         << endl;
    cin >> cmd;
    if (cmd == 5) {
      cout << "Exiting" << endl;
      break;
    }
    switch (cmd) {
      case 1:
        char ele;
        cout << "Enter element: ";
        cin >> ele;
        lol.push(ele);
        break;
      case 2:
        lol.pop();
        break;
      case 3:
        lol.status();
        break;
      case 4:
        lol.peek();
        break;
      default:
        cout << "Invalid choice" << endl;
        break;
    }
  }
  return 0;
}