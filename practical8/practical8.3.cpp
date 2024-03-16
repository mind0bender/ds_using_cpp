// WAP to perform selection sort

#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter size of the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    cout << arr[min] << endl;

    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }

  cout << "Elements: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}