#include <iostream>
/*
CSC 134
M4T1 - Example loops
Kent Jones
10/2/23
*/
using namespace std;

// Declaring functions
void choice1();
void choice2();

int main()
{
    // Declare Variables
    int choice;

    cout << "==M4T1 Menu==" << endl;
    cout << "1. Say Hello" << endl;
    cout << "2. Table of Squares" << endl;

    cout << "Select: ";
    cin >> choice;

    // If statement is one or two
    if (choice == 1)
    {
        choice1();
    }
    else if (choice == 2)
    {
        choice2();
    }
    else
    {
        cout << "Please choose a valid choice." << endl;
    }
    return 0;
}

void choice1()
{
    // Use a loop to say hello five times
    // Declare Variables
    int number = 0;
    cout << "==Saying Hello!==" << endl;
    while (number < 5)
    {
        cout << "Hello!" << endl;
        number++;
    }
    cout << "That's all folks!" << endl;
}
void choice2()
{
    // Declare Variables
    const int MIN = 1;
    const int MAX = 10;

    cout << "==Table of Squares==" << endl;
    cout << "Number\t\t" << "Number Squared" << endl;
    cout << "-------------------------------"<< endl;

    // print number and its square
    for (int number = MIN; number <=MAX; number++)
    {
        int square = number * number;
        cout << number << "\t\t" << square << endl;
    }
    cout << "-------------------------------"<< endl;
}
