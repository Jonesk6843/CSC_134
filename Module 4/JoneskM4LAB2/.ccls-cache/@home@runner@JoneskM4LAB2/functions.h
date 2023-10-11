#include <iostream>
using namespace std;
#ifndef A_H
#define A_H
// This is what a header file looks like

// Clapping from 1 to 9
void countingTest() {
  int i = 1;
  while (i <= 9) {
    cout << i << endl << " *Clap Clap*" << endl;
    i++;
  }
}

// roll function for diceRoller Function
int roll() {
  int roll = rand() % 6 + 1; // % 6 gives us 0 to 5, so we add one
  return roll;
}

// Dice Roller: rolling a 3d6
void diceRoller() {
  // Declare Variables
  int die1, die2, die3;
  int seed = time(0);
  srand(seed); // Passes to Generator

  // Roll the dice and calculate
  die1 = roll(); // calls roll method
  die2 = roll(); // calls roll method
  die3 = roll(); // calls roll method
  int diceTotal = die1 + die2 + die3;
  // Display Dice Rolls
  cout << "DIE 1: " << die1 << endl;
  cout << "DIE 2: " << die2 << endl;
  cout << "DIE 3: " << die3 << endl;
  cout << "TOTAL ROLL: " << diceTotal << endl;

  if (diceTotal >= 10) {
    cout << "You passed the test!" << endl;
  } else {
    cout << "YOU FAILED!" << endl;
  }
}

// Total Average: Averaging the number of items in five days
void totalAverage() 
{
  int total = 0;
  for (int i = 0; i < 10; i++) 
  {
    int die1 = roll();
    int die2 = roll();
    int die3 = roll();
    total += die1 + die2 + die3;
  }
  double average = static_cast<double>(total) / 10;
  cout << "Total: " << total << std::endl;
  cout << "Average: " << average << std::endl;
}
#endif // A_H