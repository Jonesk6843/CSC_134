#include <iostream>
using namespace std;
/*
CSC 134
M4HW1 - multiplication table
Kent Jones
10/16/23

This program will multiply the user's input from one to twelve.
*/
int main()
{
    // Declare Variables
    int userNum;
    int squaredNum;
    bool repeat = true;

    // Ask user to input number
    while (repeat == true) // input validation
    {
        cout << "Enter a number from 1 to 12: ";
        cin >> userNum;
        if (userNum >= 13 || userNum < 0) // Checks if user input is above or below the range of 1 and 12
        {
            cout << "Number is not in range!" << endl;
        }
        else
        {
            repeat = false;
        }
    }
    for (int i=0; i <= 12; i++) // range from zero to twelve
    {
        squaredNum = userNum * i;
        cout << userNum << " times " << i << " is " << squaredNum << "." << endl;
    }
    return 0;
}
