#include <iostream>
#include <iomanip>
using namespace std;
/*
CSC 134
M2HW1 - banking transactions
Kent Jones
9/13/23
 The program should ask the user for their name. It should then ask for the following information (all units are dollars):
  - Starting account balance
  - Amount of deposit
  - Amount of withdrawal

  The program should then display the following information:
  - Name on the account
  - Account number ( you can generate this any way you see fit -- a number you pick, or a random number, for example )
  - Final account balance.
*/
int main()
{
    //Declare Variables
    string clientName;
    int accountNum;
    double accountBalance;
    double depositAmount;
    double withdrawalAmount;
    double calculatedBalance;

    // Ask user for account balance, deposit amount, and withdrawal amount
    cout << "Hello! Welcome to Trojan Bank! May I get your  name?" << endl;
    cout << "> ";
    getline (cin, clientName);
    cout << "Hello, " << clientName <<". Let me take a look in your account." << endl;
    cout << "Please enter your eight digit account number." << endl;
    cout << "> ";
    cin >>  accountNum;
    cout << "Your starting balance is..." << endl;
    cout << "> $";
    cin >> accountBalance;
    cout << "Okay. How much money would you like to deposit?" << endl;
    cout << "> $";
    cin >> depositAmount;
    cout << "How much would you like to deposit?" << endl;
    cout << "> $";
    cin >> withdrawalAmount;

    // Calculate
    double DepositeBalance = accountBalance + depositAmount;
    calculatedBalance = DepositeBalance - withdrawalAmount;

    // Display output information
    cout << "ACCOUNT OWNER:              " << clientName << endl;
    cout << "ACCOUNT NUMBER:             " << accountNum << endl;
    cout << fixed << setprecision(2); // 2 decimal places
    cout << "AMOUNT DEPOSITED:          $" << depositAmount << endl;
    cout << "AMOUNT WITHDRAWALED:       $" << withdrawalAmount << endl;
    cout << "FINAL ACCOUNT BALANCE:     $" << calculatedBalance << endl;
    return 0;
}
