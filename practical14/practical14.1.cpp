// converting infix to postfix
#include <iostream>

using namespace std;

char stack[20];
int top = -1;

void insertEle(char ele) {
  if (top == 20 - 1) {
    cout << "Overflow";
    return;
  } else {
    stack[++top] = ele;
  }
}

char deleteEle() {
  if (top == -1) {
    cout << "Underflow";
    return '\0';
  } else {
    return stack[top--];
  }
}

void display() {
  while (top != -1) {
    cout << deleteEle();
  }
  cout << endl;
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

int main() {
  cout << "converting infix to postfix" << endl;
  char exp[20];
  cout << "Enter the expression: ";
  cin >> exp;
  cout << "Postfix: ";

  int i = 0;
  while (exp[i] != '\0') {
    char c = exp[i];
    if (isalnum(c)) {
      cout << c;
    } else {
      while (top != -1 && priority(stack[top]) >= priority(c)) {
        cout << deleteEle();
      }
      insertEle(c);
    }
    i++;
  }
  display();
  cout << endl;

  return 0;
}