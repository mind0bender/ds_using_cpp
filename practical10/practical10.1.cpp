#include <iostream>

using namespace std;

int main() {
  int m, n;
  cout << "Enter rows and cols of array: ";
  cin >> m >> n;
  int arr[m][n];
  for (int i = 0; i < m; i++) {
    cout << "Enter elements for row " << i << ": ";
    for (int j = 0; j < n; j++) {
      int tem;
      cin >> arr[i][j];
    }
  }
  int esum = 0, osum = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i][j] % 2) {
        osum += arr[i][j];
      } else {
        esum += arr[i][j];
      }
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}