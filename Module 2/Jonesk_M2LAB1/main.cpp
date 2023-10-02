#include <iostream>
#include <iomanip>
using namespace std;

/*
CSC 134
M2Lab1 - Create Example
Kent Jones
9/13/23
*/
int main()
{
    // Declare Variables
    const double COST_PER_CUBIC_FOOT = 0.23; // $ per cubic foot
    const double CHARGE_PER_CUBIC_FOOT = 0.50; // $ dollar per cubic foot
    double length, width, height; //by feet
    double volume; // in cubic feet
    double cost, charge, profit; // $$$

    // Ask the user for crate's length, width, height
    cout << "===GENERAL CRATES PRICING SYSTEM===" << endl;
    cout << "Enter crate's length: ";
    cin >> length;
    cout << "Enter crate's width: ";
    cin >> width;
    cout << "Enter crate's height: ";
    cin >> height;

    // Calculations
    volume = length * width * height; // Calculate crate's volume
    cost = volume * COST_PER_CUBIC_FOOT; // Calculate cost
    charge = volume * CHARGE_PER_CUBIC_FOOT; // Calculate customer charge
    profit = charge - cost; // calculate profit

    // Display crate's volume, cost, customer's charge, and profit.
    cout << "_____________________________________________" << endl;
    cout << "CRATE'S VOLUME: " << volume << " per cubic foot" <<endl;
    cout << fixed << setprecision(2);
    cout << "MANUFACTURING COST:    $" << cost << endl;
    cout << "CUSTOMER CHARGE:       $" << charge << endl;
    cout << "GENERAL PROFIT:        $" << profit << endl;
    return 0;
}
