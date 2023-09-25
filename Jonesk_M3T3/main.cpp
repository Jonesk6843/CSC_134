#include <iostream>
/*
CSC 134
M3T3 - Simple Menu
Kent Jones
9/25/23
*/
using namespace std;
    // Setup for Homework menu
// First, the list of functions (Declare)
void Question1();
void Question2();
void Question3();

// second, main
int main()
{
  // Declare the variables
  int choice;
  bool Repeat = false;

  // using if, make a decision based on the user's choice
  while (Repeat == false)
  {
      // Display the Main Menu
      cout << "==Main Menu==" << endl;
      cout << "(1) Question 1" << endl;
      cout << "(2) Question 2" << endl;
      cout << "(3) Question 3" << endl;
      cout << "What question would you like to answer?: ";
      cin >> choice;

      if (choice == 1)
        {
            Question1();
            Repeat = true;
        }
      else if (choice == 2)
        {
            Question2();
            Repeat = true;
        }
      else if (choice == 3)
        {
            Question3();
            Repeat = true;
        }
      else
        {
            cout << "I'm sorry, that is not a valid choice." << endl;
            cout << endl;
        }
  }
  return 0;
}

// Third, the full functions (Define)
void Question1()
{
    cout << endl;
    cout << "==Question 1==" << endl;
    cout << "What's your name?" << endl;
}
void Question2()
{
    cout << endl;
    cout << "==Question 2==" << endl;
    cout << "What's your favorite color?" << endl;
}
void Question3()
{
    cout << endl;
    cout << "==Question 3==" << endl;
    cout << "What's your blood type?" << endl;
}

