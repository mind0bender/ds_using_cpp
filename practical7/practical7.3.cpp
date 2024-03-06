// WAP to implement binary search

#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  int LA[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++) {
    cin >> LA[i];
  }

  int ele;
  cout << "Enter element to search: ";
  cin >> ele;

  int l = 0, r = n - 1;
  int idx = -1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (LA[mid] == ele) {
      idx = mid;
      break;
    } else if (LA[mid] < ele) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  if (idx == -1) {
    cout << "element not found" << endl;
  } else {
    cout << "element found at index " << idx << endl;
  }

  cout << "Yash Gupta   23BCS11317";

  return 0;
}