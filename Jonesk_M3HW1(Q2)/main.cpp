#include <iostream>
#include <iomanip>
/*
CSC 134
M3HW1 - Bronze
Kent Jones
9/25/23
*/
using namespace std;

int main()
{
    // Declare Variables
    double menuPrice;
    double taxRate = 0.07;
    double taxAmount;
    double total;
    double tip;
    int userChoice;
    bool repeat = false;

    // Ask for user's meal price
    cout << "Thank you for dining with us, today! We hope you enjoyed your meal!" << endl;
    cout << "How much was your meal, today?" << endl;
    cout << ">";
    cin >> menuPrice; // User input

    // Present user with choice between takeout or dine in
    while (repeat == false)
    {

        cout << "Was your meal (1)Dine in or (2) Take out?" << endl;
        cout << ">";
        cin >> userChoice;
        if (userChoice == 1)
            {
                // Calculate the Values including tip
                taxAmount = taxRate * menuPrice;
                total = menuPrice + taxAmount;
                tip =  total * 0.15;
                total = total + tip;
                cout << endl;
                repeat = true;
            }
          else if (userChoice == 2)
            {
                taxAmount = taxRate * menuPrice;
                total = menuPrice + taxAmount;
                cout << endl;
                repeat = true;
            }
          else
            {
                cout << "I'm sorry, that is not a valid choice." << endl;
                cout << endl;
            }
      }

    // Closing lines
    cout << "Thank you for the information! Here's your receipt!" << endl;
    cout << "We hope you dine with us again!" << endl;

    // Display Receipt
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "-----Jones' Pizzaria-----" << endl;
    cout << "MENU PRICE: $" << menuPrice << endl;
    cout << "TAX:        $" << taxAmount << endl;
    if (tip > 0)
    {
        cout << "TIP:        $" << tip << endl;
    }
    cout << "TOTAL:      $" << total << endl;
    cout << "***HAVE A NICE DAY!***" << endl;
    cout << "WRITE A REVIEW AT WWW.JONESPIZZA.COM FOR A CHANCE TO WIN $5000!";
    return 0;
}
