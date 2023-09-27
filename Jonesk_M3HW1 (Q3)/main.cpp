#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h> // for time()
/*
CSC 134
M3HW1 - Silver
Kent Jones
9/27/23
*/

// This is a simple trick-or-treating text adventure.
using namespace std;
int main()
{
  // declare the variable we need
  int choice1, choice2, choice3, choice4, choice5, choice6, choice7, choice8, choice9, choice10;
  int candyTotal;
  int seed = time(0);
  srand(seed); // Passes to Generator
  int supriseCandyAmount = rand()% 10 + 1;

  // Introduction
  cout << "IT'S ONE SPOOKY NIGHT IN THE NEIGHBORHOOD OF THIMBLE. YOU AND A FRIEND " <<
  "ARE GOING TRICK OR TREATING." << endl;
  cout << "WHO KNOWS WHAT TREASURES OF CANDY AWAIT YOU IN THIS GOULISH NIGHT?!" << endl;

  // Begin the game
  cout << "Come on! If you go any slower, we're going to miss all the candy!" << endl;

    // QUESTION 1
  cout << "Which house are you going to first" << endl;
  cout << "Type 1 (The red house) or 2 (The blue house): ";
  cin >> choice1;
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

    // QUESTION 2
  cout << "Time for the next house! Where are you going?" << endl;
  cout << "Type 1 (The Spooky House) or 2 (The Party House): " << endl;
  cin >> choice2;
  if (1 == choice2)
    {
  	cout << "Despite the many webs and inflatable spider, you walked up to the door and rang the doorbell." << endl;
  	cout << "WAH! I-IT'S THE GRIM REAPER! AND HE HAS...A bowl of candy just for you!" << endl;
  	cout << "*+" << supriseCandyAmount << "piece(s) of candy!*" << endl;
  	candyTotal = candyTotal + supriseCandyAmount;
    }
  else if (2 == choice2)
  {
  	cout << "No one could hear you over the booming music..." << endl;
  }
  else
  {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }
    // QUESTION 3
    cout << "Time for the next house! Where are you going?" << endl;
    cout << "Type 1 (Yellow House) or 2 (Old McDonald's House): " << endl;
    cin >> choice3;
    if (1 == choice3)
    {
        cout << "YIKES! A skeleton opened the door!" << endl;
        cout << "*You bolted from the door and dropped three pieces of candy*" << endl;
        cout << "*-3 Candy*" << endl;
        candyTotal = candyTotal - 3;
    }
    else if (2 == choice3)
    {
        cout << "It's sweet old Mrs. McDonald! She gave you a candy apple!" << endl;
        cout << "*+1 Candy*" << endl;
        candyTotal++;
    }
    else
    {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    // QUESTION 4
    cout << "Time for the next house! Where are you going?" << endl;
    cout << "Type 1 (The gated house) or 2 (The Brightly lit house): " << endl;
    cin >> choice4;
    if (1 == choice4)
    {
        cout << "There's no way to get past the gate. Plus there a scary dog huddled in it's dog house within the gate..." << endl;
    }
    else if (2 == choice4)
    {
        cout << "A scared lady is at the door." << endl;
        cout << endl;
        cout << "I-I don't understand why everyone enjoys this holiday?! A-At least you two are dressed like friendly...creatures..." << endl;
        cout << "*She hands you a pamphlet promoting a church she goes to. There's a piece of candy tied to it.*" << endl;
        cout << "*+1 Candy*" << endl;
        candyTotal++;
    }
    else
    {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    // QUESTION 5
    cout << "Time for the next house! Where are you going?" << endl;
    cout << "Type 1 (Egged House) or 2 (Green House): " << endl;
    cin >> choice5;
    if (1 == choice5)
    {
        cout << "*The Door swung open. An angry man stands before you." << endl;
        cout << endl;
        cout << "ALRIGHT! FINE! YOU WIN! JUST TAKE THE DANG CANDY AND LEAVE ME ALONE!!!" << endl;
        cout << "*+ " << supriseCandyAmount << "piece(s) of candy!*" << endl;
        candyTotal = candyTotal + supriseCandyAmount;
        cout << "*The Door slams shut*" << endl;
    }
    else if (2 == choice5)
    {
        cout << "YIKES! A MAN JUMPS FROM THE BUSHES IN A WOLF OUTFIT!" << endl;
        cout << "*You bolted from the door and dropped " << supriseCandyAmount << " piece(s) of candy*"  << endl;
        cout << "*-" << supriseCandyAmount << " piece(s) of Candy*" << endl;
        candyTotal = candyTotal - supriseCandyAmount;
    }
    else
    {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    // QUESTION 6
    cout << "Time for the next house! Where are you going?" << endl;
    cout << "Type 1 (Trunk of Treats Car) or 2 (Blue House): " << endl;
    cin >> choice6;
    if (1 == choice6)
    {
        cout << "Don't be shy! Take as much as you like!" << endl;
        cout << "*+" << supriseCandyAmount << " piece(s) of Candy*" << endl;
        candyTotal = candyTotal + supriseCandyAmount;
    }
    else if (2 == choice6)
    {
        cout << "You got three pieces of candy" << endl;
        cout << "*+3 Candy*" << endl;
        candyTotal = candyTotal + 3;
    }
    else
    {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    // QUESTION 7
    cout << "Time for the next house! Where are you going?" << endl;
    cout << "Type 1 (Yellow House) or 2 (Small House): " << endl;
    cin >> choice7;
    if (1 == choice7)
    {
        cout << "No one's home..." << endl;
    }
    else if (2 == choice7)
    {
        cout << "*A young woman opens the door*" << endl;
        cout << endl;
        cout << "Well aren't you adorable!" << endl;
        cout << "*You're dressed up as a popular horror movie slasher...*" << endl;
        cout << "*She gives you two pieces of candy*" << endl;
        cout << "*+2 Candy*" << endl;
        candyTotal = candyTotal + 2;
    }
    else
    {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    // QUESTION 8
    cout << "Time for the next house! Where are you going?" << endl;
    cout << "Type 1 (Black and white house) or 2 (Bloody House): " << endl;
    cin >> choice8;
    if (1 == choice8)
    {
        cout << "No one's around. In front of the door is a chair with a bowl of candy and a note" << endl;
        cout << endl;
        cout << "!Please take two. We are watching you!" << endl;
        cout << "Not wanting to take the risk, you reluctantly take two pieces of candy and leave" << endl;
        cout << "*+2 Candy*" << endl;
        candyTotal = candyTotal + 2;
    }
    else if (2 == choice8)
    {
        cout << "You stood at the front lawn, quivering with fear. You can't bring yourself to even step foot on that property..." << endl;
        cout << "You leave..." << endl;
    }
    else
    {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }
    // QUESTION 9
    cout << "Time for the next house! Where are you going?" << endl;
    cout << "Type 1 (Circus theme House) or 2 (Cowboy Themed House): " << endl;
    cin >> choice9;
    if (1 == choice9)
    {
        cout << "As you go to ring the door bell, upon pressing the button, a stream of water comes out and sprays you!" << endl;
        cout << endl;
        cout << "*FLASH*" << endl;
        cout << "HAHAhAHA! Elbow the clown's sorry! I mean it! HEhEHEHE! I just needed some new material for my circus! Here's for your troubles." << endl;
        cout << endl;
        cout << "The clown hands you "<< supriseCandyAmount << " piece(s) of candy" << endl;
        cout << "*+ " << supriseCandyAmount << " piece(s) of Candy*" << endl;
        candyTotal = candyTotal + supriseCandyAmount;
    }
    else if (2 == choice9)
    {
        cout << "Before you could even ring the doorbell, two masked bandits spring out from behind you!" << endl;
        cout << endl;
        cout << "PUT YOUR EYES WERE I CAN SEE 'EM! THIS 'ERE'S A ROBBERY!" << endl;
        cout << "Hand over some of that candy and no one gets hurt!" << endl;
        cout << endl;
        cout << "Not wanting any trouble, you hand over " << supriseCandyAmount << " piece(s) of candy" << endl;
        cout << "With a triumphant cackle, the two bandits run off" << endl;
        cout << "*- " << supriseCandyAmount << " piece(s) of Candy*" << endl;
        candyTotal = candyTotal - supriseCandyAmount;
    }
    else
    {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    // QUESTION 10
  cout << "Uh oh. It's getting kind of late! Lets hit one more house!" << endl;
  cout << "Type 1 (The Brown House) or 2 (The Black House): " << endl;
  cin >> choice10;
  if (1 == choice10)
    {
  	cout << "A man pops out dressed up as a princess? He claims his daughter wanted to go trick or treating as Cinderella and he would be her Fairy Godmother. Funny." << endl;
  	cout << "With a nervous chuckle, the man hands you a handful of candy." << endl;
  	cout << "*+7 Candy*" << endl;
  	candyTotal = candyTotal + 7;
    }
  else if (2 == choice10)
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
