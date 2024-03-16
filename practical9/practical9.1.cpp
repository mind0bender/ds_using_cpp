// WAP to perform addition of values stored on two pointer variables

#include <stdlib.h>

#include <iostream>

using namespace std;

int sum(int *, int *);

int main() {
  // int a, b;
  int *a, *b;
  a = (int *)malloc(4);
  b = (int *)malloc(4);

  cout << "Enter two values: ";
  cin >> *a >> *b;

  cout << "sum of " << *a << " stored at " << a;
  cout << " and " << *b << " stored at " << b;
  cout << " is " << sum(a, b) << endl;

  cout << "Yash Gupta\t23BCS11317" << endl;
  return 0;
}

int sum(int *p, int *q) { return *p + *q; }