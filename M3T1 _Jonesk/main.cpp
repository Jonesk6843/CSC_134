#include <iostream>
using namespace std;
/*
CSC 134
M2HT1 - Comparing Rectangles
Kent Jones
9/18/23
For this assignment you will create a program to match the following specifications.
Part 1:
Ask the user to enter the length and width of two rectangles, then display the area of both.

Part 2: Add Additional Features
Ask the user to enter the length and width of two rectangles, then display the area of both.
Tell the user which rectangle has the larger area, or if they are the same area. (Use the if statement for this.);
*/
int main()
{
    // Declare Variables
    double lengthR1, lengthR2;
    double widthR1, widthR2;
    double area1, area2;

    // Ask for length and width for first rectangle
    cout << "===Areas of Rectangle===" << endl;
    cout << "LENGTH FOR RRECTANGLE 1: ";
    cin >> lengthR1;
    cout << "WIDTH FOR RECTANGLE 1: ";
    cin >> widthR1;

    // Ask for length and width for second rectangle
    cout << "LENGTH FOR RRECTANGLE 2: ";
    cin >> lengthR2;
    cout << "WIDTH FOR RECTANGLE 2: ";
    cin >> widthR2;

    // Calculate areas
    area1 = lengthR1 * widthR1;
    area2 = lengthR2 * widthR2;

    // Display the areas
    cout << "AREA OF RECTANGLE 1: " << area1 << endl;
    cout << "AREA OF RECTANGLE 2: " << area2 <<endl;

    // Comparison
    if (area1 > area2)
    {
        cout << "RECTANGLE 1 IS LARGER." << endl;
    }
    else if (area2 > area1)
    {
        cout << "RECTANGLE 2 IS LARGER" << endl;
    }
    else
    {
        cout << "RECTANGLES ARE EQUAL.";
    }
    return 0;
}
