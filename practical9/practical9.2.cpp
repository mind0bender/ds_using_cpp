// WAP to perform addition of values stored on two pointer variables

#include <iostream>

using namespace std;

int sum(int *, int *);

int main() {
  int a, b;
  cout << "Enter 2 values: ";
  cin >> a >> b;
  int *x, *y;

  x = &a;
  y = &b;

  cout << "sum of " << *x << " stored at " << x;
  cout << " and " << *y << " stored at " << y;
  cout << " is " << sum(x, y) << endl;

  cout << "Yash Gupta\t23BCS11317" << endl;
  return 0;
}

int sum(int *p, int *q) { return *p + *q; }