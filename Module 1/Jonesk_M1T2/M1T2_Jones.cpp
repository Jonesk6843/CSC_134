#include <iostream>
using namespace std;
/*
CSC 134
M1T2 - Hello Student!
Kent Jones
8/23/23
*/
int main() {
  // Declaring Variables
  string name;
  string userInterest;

  // Ask for user's name
  cout << "Hello! What is your name?" << endl;

  // User Input
  cout << ">";
  cin >> name;

  // Closing statement.
  cout << "Nice to meet you, " << name << "!" << endl;

  // Now add a few lines of info about yourself
  cout << "My name is Kent Jones!" << endl;
  cout << "My program is Computer Developement." << endl;
  cout << "My favorite thing to do for my freetime is play video games? What "
          "about you?"
       << endl;

  // user reply
  cout << ">";
  //// This takes answers with spaces
  cin.ignore();
  getline(cin, userInterest);

  // closing lines
  cout << userInterest << "? That sounds very interesting!" << endl;
  cout << endl << "*R R I I I I N N N N G G G*" << endl << endl;
  cout << "Oh, that the bell! I have to get to class. It was nice meeting you, "
       << name << "!" << endl;
  cout << "*Exit Stage Left*" << endl;
}