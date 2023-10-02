#include <iostream>
/*
CSC 134
M3HW1 - Bronze
Kent Jones
9/25/23
*/
using namespace std;
int main()
{
  // Declare the variables
  string userAnswer;

  // Ask the user the question
  cout << "Hello, my name's chatbot!" << endl;
  cout << "I love to program! What about you?" << endl;
  cout << "> ";
  cin >> userAnswer; //Get user input

  // Display output according to user's choice
  if (userAnswer == "yes")
  {
      cout << "Wow! Maybe we can share each other's code later on." << endl;
  }
  else if (userAnswer == "no")
  {
      cout << "That's alright. With a little bit of practice, you'll learn to love it." << endl;
  }
  else
  {
      cout << "It's okay if you don't know. Programming is a love-hate relationship for some people." << endl;
  }
  return 0;
}

