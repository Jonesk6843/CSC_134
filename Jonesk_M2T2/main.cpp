#include <iostream>
#include <iomanip>
using namespace std;

/*
CSC 134
M2T2 - receipt calculator V2
Kent Jones
9/11/23
This program should take the price of a meal, which is user entered, and print out a simple text receipt.

The user should enter:
 - The food's name
 - It's price
 - And how many?

The receipt should include:
 - Price before tax
 - Tax owed (8%)
 - Total price including tax.
*/
int main()
{
    // Declare Variables
    double price;
    double menu_Price;
    int num_Items;
    string food_Name;
    double const TAXRATE = 0.07;
    double tax_Amount;
    double total;

    // 1+2 - Greet the user and get input for food name, price, and amount
    cout << "Hello! Welcome to Jones' Pizzeria! Where good times call for pizza! What can I get for you today?" << endl;
    cout << ">";
    cin.ignore(); // User input
    getline(cin, food_Name);
    cout << "How much does it say on that menu?";
    cout << ">";
    cin >> menu_Price; // User input
    cout << "Okay. Now how many would you like?";
    cout << ">";
    cin >> num_Items; // User input
    cout << "Okay! Coming right up!" << endl;

    // 3 - Calculate the Values
    price =  num_Items * menu_Price;
    tax_Amount = TAXRATE * price;
    total = price + tax_Amount;

    // Closing lines
    cout << "* SIZZLE SIZZLE SIZZLE * " << endl << endl;
    cout << "Alright sir, here you are! We hope you enjoy!" << endl << endl;
    cout << "* NOM NOM NOM NOM *" << endl << endl;
    cout << "Did you enjoy everything? Great! Here's your receipt!" << endl;
    cout << "We hope you dine with us again!" << endl;

    // Display Receipt
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "-----Jones' Pizzeria-----" << endl;
    cout << "ORDER: " << num_Items << " " << food_Name << "(s)" << endl;
    cout << "PRICE:      $" << price << endl;
    cout << "TAX:        $" << tax_Amount << endl;
    cout << "TOTAL:      $" << total << endl;
    cout << "***HAVE A NICE DAY!***" << endl;
    cout << "WRITE A REVIEW AT WWW.JONESPIZZA.COM FOR A CHANCE TO WIN $5000!";
    return 0;
}

