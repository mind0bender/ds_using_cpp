#include <iostream>

using namespace std;

class ABC {
  int a, b;

 public:
  void set() {
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
  }
  void display() {
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
  }
};

int main() {
  ABC* obj = new ABC;

  obj->set();
  cout << endl;
  obj->display();

  cout << "Yash Gupta\t23BCS11317" << endl;
  return 0;
}