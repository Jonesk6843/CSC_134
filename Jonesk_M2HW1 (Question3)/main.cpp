#include <iostream>
#include <iomanip>
using namespace std;
/*
CSC 134
M2HW1 - Pizza Party
Kent Jones
9/13/23

The program should ask how many pizzas you order, how many slices per pizza, and how many visitors are coming.
The program should calculate and display how many pieces of pizza are left over.
*/
int main()
{
    // Declare Variables
    int pizzaAmount;
    int slicesPerPizza;
    int guestNum;
    int totalPizzaSlices;
    int leftOverPizza;

    // Ask the user how many pizzas they want, slices per pizza, and guest number
    cout << "Welcome to Jones' Pizzeria! Where good times calls for pizza!" << endl;
    cout << "How many pizza will you like for your party?" << endl;
    cout << "> ";
    cin >> pizzaAmount;
    cout << "Okay! How many slices per pizza?" << endl;
    cout << "> ";
    cin >> slicesPerPizza;
    cout << "And how many guests will be coming?" << endl;
    cout << "> ";
    cin >> guestNum;
    cout << "Okay! We'll start preparing your pizzas for your party!" << endl;

    // Calculate how many slices of pizza will be left over
    totalPizzaSlices = pizzaAmount * slicesPerPizza;
    leftOverPizza = totalPizzaSlices - guestNum;

    // Display left over pizza amount
    cout << endl;
    cout << "*One Party Later*" << endl;
    cout << endl;
    cout << "After a nice time of partying, you were left with " << leftOverPizza << " pizza(s) to take home!" << endl;

    return 0;
}
