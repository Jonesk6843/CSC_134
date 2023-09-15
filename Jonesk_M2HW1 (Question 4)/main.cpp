#include <iostream>
#include <iomanip>
using namespace std;

/*
CSC 134
M2LAB1 - Cheering program
Kent Jones
9/15/23
*/


using namespace std;

int main()
{
    // Declare Variables
    string letsGo, school, team;


    // Ask user for letsGo message, school name, and team name
    cout << "Enter school name: ";
    getline (cin, school);
    cout << "Enter team name: ";
    getline (cin, team);
    cout << "Rally the crowd! Type [Let's Go]!: ";
    getline (cin, letsGo);

    // Display Chant
    cout << "__________" << endl;
    string cheerOne = letsGo + ", " + school + "!";
    string cheerTwo = letsGo + ", " + team + "!";
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
    return 0;
}
