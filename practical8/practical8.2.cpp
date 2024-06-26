// WAP to implement insertion sort on a LA of n elements

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

  for (int i = 1; i < n; i++) {
    int unsortedElement = LA[i];
    int j = i - 1;
    for (; j >= 0 && LA[j] > unsortedElement; j--) {
      LA[j + 1] = LA[j];
    }
    LA[j + 1] = unsortedElement;
  }

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << LA[i] << " ";
  }
  cout << endl;
  cout << "Yash Gupta\t23BCS11317" << endl;

  return 0;
}