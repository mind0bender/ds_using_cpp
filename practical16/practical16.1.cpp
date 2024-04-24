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

 public:
  int top = -1;
  void push(char ele) {
    if (top != maxSize - 1) {
      top++;
      arr[top] = ele;
    }
  }
  char pop() {
    if (top != -1) {
      top--;
      return arr[top + 1];
    }
    return '\0';
  }
  char peek() { return arr[top]; }
  int isEmpty() { return top == -1; }
};

int priority(char ope);

int main() {
  Stack ops;
  string exp;
  cout << "Enter the expression: ";
  cin >> exp;

  for (int i = 0; exp[i] != '\0'; i++) {
    char c = exp[i];
    if (isalnum(c)) {
      cout << c;
    } else if (c == '(') {
      ops.push(c);
    } else if (c == ')') {
      while (ops.peek() != '(') {
        cout << ops.peek();
        ops.pop();
      }
      ops.pop();
    } else {
      while (ops.peek() != '(' && priority(ops.peek()) >= priority(c)) {
        cout << ops.peek();
        ops.pop();
      }
      ops.push(c);
    }
  }
  while (!ops.isEmpty()) {
    cout << ops.pop();
  }
  cout << endl;
  cout << "Yash Gupta\t23BCS11317" << endl;

  return 0;
}

int priority(char ope) {
  switch (ope) {
    case '*':
    case '/':
      return 2;
    case '+':
    case '-':
      return 1;
    default:
      return -1;
  }
}