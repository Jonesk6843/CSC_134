#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  cout << "M6LAB2-Array Version" << endl;
  // Declare variables
  int arraySize;
  int total = 0;
  int maxNum;
  int minNum;
  // Ask the user for the desired array size
  cout << "How big would you like your array to be?" << endl;
  cout << "> ";
  cin >> arraySize;
  vector<int> numsArray(arraySize);
  // Ask for user number input
  for (int i = 0; i < arraySize; i++) {
    int userNum;
    cout << "Please enter #" << (i + 1) << ":";
    cin >> userNum;
    numsArray[i] = userNum;
    total += userNum;
    // Finding max and min
    if (i == 0) {
      minNum = numsArray[i];
      maxNum = numsArray[i];
    } else {
      if (minNum > numsArray[i]) {
        minNum = numsArray[i];
      }
      if (maxNum < numsArray[i]) {
        maxNum = numsArray[i];
      }
    }
  }
  // Calculate and display inputs
  for (int i = 0; i < arraySize; i++) {
    cout << "Input #" << (i + 1) << ": " << numsArray[i] << endl;
  }
  cout << "TOTAL: " << total << endl;
  cout << "MAX NUM: " << maxNum << endl;
  cout << "MIN NUM: " << minNum << endl;
  return 0;
}
