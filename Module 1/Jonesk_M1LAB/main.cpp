/*
CSC 134
M1Lab
Kent Jones
8/28/23
This program will simulate an apple orchard
*/
#include <iostream>
using namespace std;

int main()
{
    // Declaring Variables
    string ownerName = "Kent"; // The owner's name
    int apples = 100; // Number of apples
    double pricePerApple = 0.25; // Price of apples
    int userApples;

    // Calculate the total price of apples
    double totalPrice =  apples * pricePerApple;

    // print all the information about orchard
    cout << "Welcome to " << ownerName << "'s apple orchard!" << endl;
    cout << "We have " << apples << " apples in stock." << endl;
    cout << "Our apples currently cost $" << pricePerApple << " each." << endl;

    //TODO:ask the user how many apples they want.
    cout << "How many apples would you like?" << endl;

    // Final line, to print totalPrice of apples. Ensure the format is proper.
    cout << "YEEHAW! You want to buy all our apples?! Well, that'll cost ya $" << totalPrice << "!" << endl;
    return 0;
}
