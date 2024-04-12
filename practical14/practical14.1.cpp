#include <iostream>

using namespace std;

int main() {
  char exp[20];
  cout << "Enter the expression: ";
  cin >> exp;
  int i = 0;
  cout << exp << endl;
  while (exp[i] != '\0') {
    char c = exp[i];
    // isalnum() is a function that checks if the character is an alphabet or a
    // number
    // if (isalnum(c)) {
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z')) {
      cout << c;
    }
    i++;
  }
  cout << endl;
  return 0;
}