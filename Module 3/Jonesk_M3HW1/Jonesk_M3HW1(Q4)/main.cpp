#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h> // for time()
/*
CSC 134
M3HW1 - Gold
Kent Jones
9/27/23
*/
using namespace std;

int main()
{
    // Declare Variables
    int seed = time(0);
    srand(seed); // Passes to Generator
    int randNum1 = rand()% 20 + 1;
    int randNum2 = rand()% 20 + 1;
    int sum = randNum1 + randNum2;
    int userAnswer;
    bool repeat = false;

    // Display Problem
    while (repeat == false)
    {
        cout << randNum1 << " + " << randNum2 << " = " << " ? " << endl;
        cout << "What is the Answer?" << endl;
        cout << "> "; cin >> userAnswer;

        // Determine if user input is correct
        if (userAnswer == sum)
        {
            cout << "C O R R E C T !" << endl;
            repeat = true;
        }
        else
        {
            cout << "I N C O R R E C T !" << endl;
        }
    }
    return 0;
}
