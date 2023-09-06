/*
CSC 134
M2T1 - receipt calculator
Kent Jones
9/6/23
This program will simulate a simple receipt calculator for the bill from a restaurant
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


    // Declare Variables
    double menuPrice;
    double taxRate = 0.07;
    double taxAmount;
    double total;

    // Ask for user's meal price
    cout << "Thank you for dining with us, today! We hope you enjoyed your meal!" << endl;
    cout << "How much was your meal, today?" << endl;
    cout << ">";
    cin >> menuPrice; // User input

    // Calculate the Values
    taxAmount = taxRate * menuPrice;
    total = menuPrice + taxAmount;

    // Closing lines
    cout << "Thank you for the information! Here's your receipt!" << endl;
    cout << "We hope you dine with us again!" << endl;

    // Display Receipt
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "-----Jones' Pizzaria-----" << endl;
    cout << "MENU PRICE: $" << menuPrice << endl;
    cout << "TAX:        $" << taxAmount << endl;
    cout << "TOTAL:      $" << total << endl;
    cout << "***HAVE A NICE DAY!***" << endl;
    cout << "WRITE A REVIEW AT WWW.JONESPIZZA.COM FOR A CHANCE TO WIN $5000!";
    return 0;
}
