#include <iostream>
#include <stdlib.h> // for rand()
#include <time.h> // for time()
using namespace std;
/*
CSC 134
M3T2 - The House Always Wins!
Kent Jones
9/18/23

For this assignment, we'll need to do a little research to find out how random numbers work.

(At the beginning, we can ask the user to tell us what the dice rolls are, and then we'll use rnd(). )

We'll start with the very basics:

The player rolls two 6-sided dice (abbreviated 2d6.)
7 or 11 -> instant win
2, 3, or 12 -> instant loss
The program should ask for the dice rolls, then use if statements to tell the user the result.
*/
int roll()
{
    int roll = rand() % 6 + 1; // % 6 gives us 0 to 5, so we add one
    return roll;
}

int main()
{
    cout << "+-+-+-HOUSE OF JONES CASINO+-+-+-!" << endl;

    // Declare Variables
    int die1, die2, diceTotal;
    int seed = time(0);
    srand(seed); // Passes to Generator

    // Roll the dice and calculate
    die1 = roll(); // calls roll method
    die2 = roll(); // calls roll method
    diceTotal = die1 + die2;

    // Display Dice Rolls
    cout << "DIE 1: " << die1 << endl;
    cout << "DIE 2: " << die2 << endl;
    cout << "DICE TOTAL: " << diceTotal << endl;

    // Declare if/ else statements for:
    if (diceTotal == 7 || diceTotal == 11) // Win statement (7 OR 11)
    {
        cout << "INSTANT WIN!";
    }
    else if (diceTotal == 2) // Lose statement (2 special message)
    {
        cout << "SNAKE EYES!" << endl << "INSTANT LOSS!";
    }
    else if (diceTotal == 3 || diceTotal == 12 ) // Lose statement (3, OR 12)
    {
        cout << "INSTANT LOSS!";
    }
    else // Every possibility is false
    {
        cout << "THIS GAME IS A DRAW!";
    }
    return 0;
}
