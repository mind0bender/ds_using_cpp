/*
class Queue
  arr[max]
  front -1
  rear  -1
  insertEle(ele)
  deleteEle()
  displayEle()
*/

#include <iostream>

using namespace std;

const int maxSize = 5;

class Queue {
 public:
  int arr[maxSize];
  int front, rear;
  Queue() {
    front = -1;
    rear = -1;
  }
  void enqueue(int ele) {
    if (rear == maxSize - 1) {
      cout << "Overflow!" << ele << endl;
    } else {
      if (front == -1) {
        front = 0;
      }
      arr[++rear] = ele;
      cout << "inserted " << ele << endl;
    }
  }
  void dequeue() {
    if (front == -1) {
      cout << "Underflow" << endl;
    } else {
      cout << "Deleted " << arr[front] << endl;
      if (front == rear) {
        front = rear = -1;
      } else {
        front++;
      }
    }
  }
  void displayEle() {
    cout << "Queue elements are: ";
    for (int i = front; i <= rear; i++) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  }
};

int main() {
  Queue q;
  bool exit = false;
  cout << "0. Exit | " << "1. Insert | " << "2. Delete | " << "3. Display"
       << endl;
  while (!exit) {
    cout << ">>> ";
    int c;
    cin >> c;
    switch (c) {
      case 0:
        exit = true;
        break;
      case 1:
        int val;
        cout << "Enter value: ";
        cin >> val;
        q.enqueue(val);
        break;
      case 2:
        q.dequeue();
        break;
      case 3:
        q.displayEle();
        break;
      default:
        cout << "Invalid Choice: " << c << endl;
        break;
    }
  }
  cout << "Yash Gupta\t23BCS11317" << endl;
  return 0;
}