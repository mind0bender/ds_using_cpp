// WAP to implement bubble sort on a LA of n elements

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

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (LA[j] > LA[j + 1]) {
        LA[j] += LA[j + 1];
        LA[j + 1] = LA[j] - LA[j + 1];
        LA[j] -= LA[j + 1];
      }
    }
  }

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << LA[i] << " ";
  }

  cout << "Yash Gupta\t23BCS11317" << endl;

  return 0;
}