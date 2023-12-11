#include <iostream>
using namespace std;
/*
Kent Jones
Norris
M6HW1 - SILVER
12/11/23
*/
int main()
{
    // Declaring functions
    void currencyConverter();
    void unitConverter();
    // Declaring variables
    int choice;

   // Display Main Menu
   cout << "==MAIN MENU==" << endl;
   cout << "(1) Currency Converter" << endl;
   cout << "(2) unit Converter" << endl;
   cout << "(3) exit" << endl;
   cout << "> ";
   cin >> choice;
   if (choice == 1)
   {
       currencyConverter();
   }
   else if (choice == 2)
   {
       unitConverter();
   }
   else if (choice == 3)
   {
       cout << "closing program...";
       exit(0);
   }
   else
   {
       cout << "Please choose a valid choice." << endl;
       main();
   }
    return 0;
}

void currencyConverter()
{
    // Declaring Variables
    int choice;
    double conversion;
    double userAmount;
    const double USD = 1.18;
    const double EURO = 0.85;
    const double YEN = 110.24;

    // Display main menu
    cout << "Currency Converter" << endl;
    cout << "1. Convert USD to Euro" << endl;
    cout << "2. Convert Euro to USD" << endl;
    cout << "3. Convert USD to Japanese Yen" << endl;
    cout << "4. Convert Japanese yen to USD" << endl;
    cout << "5. Exit" << endl;
    cout << "> ";
    cin >> choice;
    if (choice == 1)
   {
       cout << "USD TO EURO" << endl;
       cout << "------------" << endl;
       cout << "Enter the amount in USD: ";
       cin >> userAmount;
       conversion = userAmount * EURO;
       cout << "$" << userAmount << " USD(s) is equal to " << conversion << " Euro(s).";
   }
   else if (choice == 2)
   {
       cout << "EURO TO USD" << endl;
       cout << "------------" << endl;
       cout << "Enter the amount in Euro: ";
       cin >> userAmount;
       conversion = userAmount * EURO;
       cout << userAmount << " Euro(s) is equal to $" << conversion << " dollar(s).";
   }
   else if (choice == 3)
   {
       cout << "USD TO YEN" << endl;
       cout << "------------" << endl;
       cout << "Enter the amount in USD: ";
       cin >> userAmount;
       conversion = userAmount * YEN;
       cout << "$" << userAmount << " USD(s) is equal to " << conversion << " Japanese Yen.";
   }
   else if (choice == 4)
   {
       cout << "YEN TO USD" << endl;
       cout << "------------" << endl;
       cout << "Enter the amount in Japanese Yen: ";
       cin >> userAmount;
       conversion = userAmount * USD;
       cout << userAmount << " Japanese yen is equal to $" << conversion << " dollar(s).";
   }
   else if (choice == 5)
   {
       cout << "returning to main menu..." << endl;
       main();
   }
   else
   {
       cout << "Please choose a valid choice." << endl;
       currencyConverter();
   }
}

void unitConverter()
{
    // Declaring Variables
    int choice;
    double unitConversion;
    double userAmount;
    const double MILE = 0.621371;
    const double KILOMETER = 1.60934;
    const double POUND = 2.20462;
    const double KILOGRAM = 0.453592;

    // Display main menu
    cout << "Unit Converter" << endl;
    cout << "1. Convert Miles to Kilometers" << endl;
    cout << "2. Convert Kilometers to Miles" << endl;
    cout << "3. Convert Pounds to Kilograms" << endl;
    cout << "4. Convert Kilograms to Pounds" << endl;
    cout << "5. Exit" << endl;
    cout << "> ";
    cin >> choice;
    if (choice == 1)
   {
       cout << "Miles to Kilometers" << endl;
       cout << "------------" << endl;
       cout << "Enter the distance in miles: ";
       cin >> userAmount;
       unitConversion = userAmount * KILOMETER;
       cout << userAmount << " mis is equal to " << unitConversion << " kms.";
   }
   else if (choice == 2)
   {
       cout << "Kilometers to Miles" << endl;
       cout << "------------" << endl;
       cout << "Enter the amount in Kilometers: ";
       cin >> userAmount;
       unitConversion = userAmount * MILE;
       cout << userAmount << " kms is equal to " << unitConversion << " mis.";
   }
   else if (choice == 3)
   {
       cout << "Pounds to Kilograms" << endl;
       cout << "------------" << endl;
       cout << "Enter the amount in Pounds: ";
       cin >> userAmount;
       unitConversion = userAmount * KILOGRAM;
       cout << userAmount << " lbs is equal to " << unitConversion << " kgs.";
   }
   else if (choice == 4)
   {
       cout << "Kilograms to Pounds" << endl;
       cout << "------------" << endl;
       cout << "Enter the amount in kilograms: ";
       cin >> userAmount;
       unitConversion = userAmount * POUND;
       cout << userAmount << " kgs is equal to " << unitConversion << " lbs.";
   }
   else if (choice == 5)
   {
       cout << "returning to main menu..." << endl;
       main();
   }
   else
   {
       cout << "Please choose a valid choice." << endl;
       unitConverter();
   }
}
