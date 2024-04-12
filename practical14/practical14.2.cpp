/*
globally define an stack arr of char
and top var for the stack
create a function insertElement(char c) to push the character c into the stack
create a function deleteElement() to pop the top element from the stack
*/

#include <iostream>

using namespace std;

char stack[20];
int top = -1;

void insertElement(char c);
char deleteElement();

int main() {
  insertElement('a');
  insertElement('b');
  deleteElement();
  for (int i = 0; i <= top; i++) cout << stack[i] << endl;
  return 0;
}

void insertElement(char c) {
  if (top == 20 - 1) {
    cout << "Stack is full" << endl;
  } else {
    top++;
    stack[top] = c;
  }
}

char deleteElement() {
  if (top == -1) {
    cout << "Stack is empty" << endl;
    return '\0';
  } else {
    top--;
    return stack[top + 1];
  }
}