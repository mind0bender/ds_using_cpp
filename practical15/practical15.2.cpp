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

const int maxSize = 10;

class Queue {
 public:
  char arr[maxSize];
  int front, rear;
  Queue() {
    front = -1;
    rear = -1;
  }
  void enqueue(char ele) {
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
      cout << arr[i];
    }
    cout << endl;
  }
  int search(char ele) {
    for (int i = front; i < rear + 1; i++) {
      if (ele == arr[i]) {
        cout << "Element found at index " << i << endl;
        return i;
      }
    }
    cout << "Element not found" << endl;
    return -1;
  }
};

int main() {
  Queue q;

  string name;
  cout << "Enter name: ";
  cin >> name;

  for (int i = 0; i < name.size(); i++) {
    q.enqueue(name[i]);
  }

  cout << "Enter search character: ";
  char search;
  cin >> search;
  q.search(search);

  q.displayEle();
  cout << "Yash Gupta\t23BCS11317" << endl;
  return 0;
}