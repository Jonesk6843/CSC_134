#include "functions.h"
#include <iostream>
#include <stdlib.h> // for rand()
#include <time.h>   // for time()
using namespace std;
/*
Kent Jones
CSC 134
M4LAB2 - Simple Menu
10/11/23

Ask the user to select option 1, 2, 3, or 4.
If they do choose 1,2, or 3, or 4, carry out an action using if block ("option
one", "option two", or quit) If they choose anything else, ask them again until
they do choose a valid option.
*/
int main() {
  // Declare Variables
  int choice;
  bool repeat = true;

  // Display Main Menu
  while (repeat) {
    cout << "==Main Menu==" << endl;
    cout << "1. Counting Test" << endl;
    cout << "2. Dice Roller" << endl;
    cout << "3. Running Total & Average" << endl;
    cout << "4. Quit Program" << endl;
    cout << "> ";
    cin >> choice;
    if (choice == 1) {
      countingTest();
    } else if (choice == 2) {
      diceRoller();
    } else if (choice == 3) {
      totalAverage();
    } else if (choice == 4) {
      cout << "closing program...";
      exit(0);
    } else {
      cout << "Please choose a valid choice." << endl;
    }
  }
  return 0;
}
