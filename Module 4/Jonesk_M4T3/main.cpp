#include <iostream>
/*
Kent Jones
CSC 134
M4T3 - Three Types of Loops
10/9/23

This is a program that take some number, then sum and average them through three types of loops
-For
-While
-Sentinel
*/
using namespace std;

void program1() // For loop
{
    // Declare Variables
    const int NUM_DAYS = 5;
    int totalItems = 0;
    int input;

    // Prompt the user to enter numbers
    for (int i=1 ; i < NUM_DAYS; i++)
    {
        cout << "How many items did you buy on day #" << i << "?" << endl;
        cout << "> ";
        cin >> input;
        totalItems += input;
    }
    cout << "Total Items: " << totalItems << endl;
    double average = (double) totalItems/NUM_DAYS;
    cout << "Average: " << average << endl;
}

void program2() // While loop
{
    // Declare Variables
    int i = 1;
    const int NUM_DAYS = 5;
    int totalItems = 0;
    int input;

    while (i < NUM_DAYS)
    {
        // Prompt the user to enter numbers
        cout << "How many items did you buy on day #" << i << "?" << endl;
        cout << "> ";
        cin >> input;
        totalItems += input;
        i++;
    }
    cout << "Total Items: " << totalItems << endl;
    double average = (double) totalItems/NUM_DAYS;
    cout << "Average: " << average << endl;
}

void program3() // Sentinel Loop
{
    // Declare Variables
    int i = 0;
    int totalItems = 0;
    int input;
    bool repeat = true;

    // Prompt the user to enter numbers

    while (repeat)
    {
        cout << "Enter a number. Enter -1 when desired numbers are entered." << endl;
        cout << "> ";
        cin >> input;
        if (input == -1)
        {
            cout << "CALCULATING..." << endl;
            repeat = false;
        }
        else
        {
            totalItems += input;
            i++;
        }
    }
    cout << "Total Items: " << totalItems << endl;
    double average = (double) totalItems/i;
    cout << "Average: " << average << endl;
}

int main()
{
    // Declare Variables
    int choice;

    // Display Main Menu
    cout << "Choose a loop." << endl;
    cout << "1. For Loop" << endl;
    cout << "2. While Loop" << endl;
    cout << "3. Sentinel-Controlled While Loop" << endl;
    cout << "> ";
    cin >> choice;
    if (choice == 1)
    {
        program1();
    }
    else if (choice == 2)
    {
        program2();
    }
    else if (choice == 3)
    {
        program3();
    }
    else
    {
    cout << "Please choose a valid choice." << endl;
    }

    return 0;
}


