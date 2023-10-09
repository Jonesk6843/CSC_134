#include <iostream>
/*
Kent Jones
CSC 134
M4LAB1 - Asterisks box
10/9/23
This is a program that draws a block of asterisks using for loops
*/
using namespace std;

int main()
{
    // Declare Variables
    int width;
    int height;

    // Prompt the user for width and height
    cout << "What's the width of your block?" << endl;
    cout << "> ";
    cin >> width;
    cout << "What's the height of your block?" << endl;
    cout << "> ";
    cin >> height;
    // Display asterisk block
    for (int i=0; i < height; i++)
    {
        for (int j=0; j < width; j++)
        {
         cout << "*" << " ";
        }
        cout << "*" << endl;
    }
    cout << endl;
    return 0;
}
