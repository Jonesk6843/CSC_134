/*
CSC 134
M3LAB2
Kent Jones
9/20/23
*/
#include <iostream>
using namespace std;


int main()
{
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice1, choice2, choice3;
  int candyTotal;

  // ask the question
  cout << "It's time for some trick or treating! Which house are you going to first" << endl;
  cout << "Type 1 (The red house) or 2 (The blue house): ";
  cin >> choice1;

  // using if, make a decision based on the user's choice (CHOICE 1)
  if (1 == choice1)
    {
  	cout << "You got a rock..." << endl;
    }
  else if (2 == choice1)
  {
  	cout << "You got a spooky spider ring and a Hersey bar!" << endl;
  	cout << "*+1 Candy*" << endl;
  	candyTotal++;
  }
  else
  {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // using if, make a decision based on the user's choice (CHOICE 2)
  cout << "Time for the next house! Where are you going?" << endl;
  cout << "Type 1 (The Spooky House) or 2 (The Party House): " << endl;
  cin >> choice2;
  if (1 == choice2)
    {
  	cout << "Despite the many webs and inflatable spider, you walked up to the door and rang the doorbell." << endl;
  	cout << "WAH! I-IT'S THE GRIM REAPER! AND HE HAS...A bowl of candy just for you!" << endl;
  	cout << "*+5 Candy*" << endl;
  	candyTotal = candyTotal + 5;
    }
  else if (2 == choice2)
  {
  	cout << "No one could hear you over the booming music..." << endl;
  }
  else
  {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // using if, make a decision based on the user's choice (CHOICE 3)
  cout << "Uh oh. It's getting kind of late! Lets hit one more house!" << endl;
  cout << "Type 1 (The Brown House) or 2 (The Black House): " << endl;
  cin >> choice3;
  if (1 == choice3)
    {
  	cout << "A man pops out dressed up as a princess? He claims his daughter wanted to go trick or treating as Cinderella and he would be her Fairy Godmother. Funny." << endl;
  	cout << "With a nervous chuckle, the man hands you a handful of candy." << endl;
  	cout << "*+7 Candy*" << endl;
  	candyTotal = candyTotal + 7;
    }
  else if (2 == choice3)
  {
      if (candyTotal == 0)
      {
          cout << "I-IT'S THE BULLY FROM SCHOOL! He reaches into your basket only to find out that your score was anything but favorable." << endl;
          cout << "With a defeated grunt, the bully pushed you down and told you to scram with the slam of the door." << endl;
      }
      else
      {
          cout << "I-IT'S THE BULLY FROM SCHOOL! He reaches into your basket and steals three pieces of candy! What a jerk!" << endl;
          candyTotal = candyTotal - 3;
      }
  }
  else
  {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // End Result
  if (candyTotal == 0)
  {
      cout << "What a shame, you didn't get any candy!" << endl;
      cout << "HAPPY HALLOWEEN?" << endl;
  }
  else
  {
      cout << "Tonight, you went home with " << candyTotal << " piece(s) of candy." << endl;
      cout << "HAPPY HALLOWEEN!" << endl;
  }

  cout << "Thanks for playing!" << endl;
  return 0;

}
